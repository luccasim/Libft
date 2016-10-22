/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <luccasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 22:32:50 by luccasim          #+#    #+#             */
/*   Updated: 2016/03/22 02:47:39 by luccasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char			*save_char(char *cpy, char **line, int *lec)
{
	int		i;
	char	*new;
	char	*ret;

	if (!cpy)
		return (NULL);
	i = 0;
	while (cpy[i])
	{
		if (cpy[i] == '\n')
		{
			ret = ft_strsub(cpy, 0, i);
			new = ft_strdup(cpy + i + 1);
			free(cpy);
			*line = ret;
			return (new);
		}
		i++;
	}
	*line = cpy;
	*lec = (ft_strlen(cpy) != 0) ? 1 : 0;
	return (NULL);
}

static char			*ft_realloc(char *s1, char const *s2)
{
	char	*new;

	if (!s1)
		s1 = ft_strnew(0);
	new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	ft_strcpy(new, s1);
	ft_strcat(new, s2);
	free(s1);
	return (new);
}

static t_list		*find_fd(t_list *lst, size_t fd)
{
	t_list		*tmp;
	t_list		*new;

	if (lst->content_size == 0)
	{
		lst->content_size = fd;
		return (lst);
	}
	if (fd == lst->content_size)
		return (lst);
	tmp = lst;
	while (tmp)
	{
		if (fd == tmp->content_size)
			return (tmp);
		tmp = tmp->next;
	}
	new = ft_lstnew("NULL", 0);
	new->content_size = fd;
	while (lst->next)
		lst = lst->next;
	lst->next = new;
	return (new);
}

int					get_next_line(int fd, char **line)
{
	char			buf[BUF_SIZE + 1];
	char			*cpy;
	static t_list	*save = NULL;
	t_list			*lst;
	int				ret;

	if (!save)
		save = ft_lstnew("NULL", 0);
	if (line == NULL || fd < 0 || save == NULL)
		return (-1);
	lst = find_fd(save, (size_t)fd);
	cpy = lst->content;
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret == -1)
			return (ret);
		buf[ret] = 0;
		cpy = ft_realloc(cpy, buf);
		if ((lst->content = save_char(cpy, line, &ret)))
			return (1);
	}
	if ((lst->content = save_char(cpy, line, &ret)))
		return (1);
	return (ret);
}
