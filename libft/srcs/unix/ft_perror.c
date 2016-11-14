#include "ft_unix.h"

int		ft_perror(char *msg)
{
	int		nerror;

	nerror = ERROR;
	ft_error(0, msg);
	return (nerror);
}