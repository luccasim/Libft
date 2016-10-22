#include "libft.h"
#include "ft_unix.h"

int main (int ac, char **av)
{
	int nbr_arg;
	t_list *file;
	file = 0;
	nbr_arg = ft_options(&av, 0, 0);
	if (nbr_arg == 1)
		file = ft_stdin_file();
	ft_lst_for_each(file, ft_putendl);
	return (0);
}