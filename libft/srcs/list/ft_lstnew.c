/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <luccasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 15:06:34 by luccasim          #+#    #+#             */
/*   Updated: 2016/03/22 02:03:04 by luccasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "libft.h"
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		new->content_size = 0;
		if (content)
		{
			new->content = ft_memalloc(content_size + 1);
			ft_memcpy(new->content, content, content_size);
		}
		else
			new->content = NULL;
		new->next = NULL;
	}
	return (new);
}
