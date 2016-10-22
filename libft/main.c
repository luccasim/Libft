#include "libft.h"
#include "ft_unix.h"

void output(t_list *elem)
{
	ft_printf("{r:1:%s}\n",elem->content);
}

int main (int ac, char **av)
{
	int nbr_arg;
	t_list *file;
	file = 0;
	nbr_arg = ft_options(&av, 0, 0);
	if (nbr_arg == 1)
		file = ft_stdin_file();
	ft_lstiter(file, output);
	return (0);
}