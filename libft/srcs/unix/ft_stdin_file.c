#include "ft_unix.h"
#include "get_next_line.h"
#include "libft.h"

t_list	*ft_stdin_file(void)
{
	t_list	*buf;
	t_list	*tmp;
	char	*line;

	tmp = 0;
	buf = 0;
	line = 0;
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