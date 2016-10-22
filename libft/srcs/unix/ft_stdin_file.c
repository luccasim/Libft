#include "ft_unix.h"
#include "get_next_line.h"
#include "libft.h"
#include <stdio.h>
t_list	*ft_stdin_file(void)
{
	t_list	*buf;
	t_list	*tmp;
	char	*line;


	tmp = NULL;
	buf = NULL;
	line = NULL;
	while (get_next_line(0, &line))
	{
		tmp = ft_lstnew(line, ft_strlen(line));
		if (!buf)
			buf = tmp;
		else
			ft_lstadd_tail(buf, tmp);
		ft_strdel(&line);
	}
	return (buf);
}