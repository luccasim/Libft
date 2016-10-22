#include "ft_unix.h"
#include "get_next_line.h"
#include "libft.h"

t_list	*ft_stdin_file(void)
{
	t_list	*buf;
	t_list	*content;
	char	*line;


	buf = 0;
	line = 0;
	while (get_next_line(0, &line))
	{
		content = ft_lstnew(line, ft_strlen(line));
		if (!buf)
			buf = content;
		else
			ft_lstadd_tail(&buf, content);
		free(line);
	}
	return (buf);
}