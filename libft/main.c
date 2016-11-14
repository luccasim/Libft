#include "ft_tool.h"
#include "ft_mlx.h"
#include <stdio.h>

void	putfilered(t_list *e)
{
	char *str;

	str = (char *)e->content;
	ft_printf("{r:1:%s}\n", str);
}

int		main(int ac, char **av)
{
	t_list	*list;

	ac = ft_options(&av, NULL, 2);
	if (ac == 2)
	{
		TIME_START;
		list = ft_get_file(*av);
		if (list)
		{
			ft_lstiter(list, putfilered);
		}
		TIME_END;
	}
	return (FT_EXIT);
}
