#include "ft_unix.h"

int		ft_nerror(int error, int action)
{
	static int	nerror = 0;

	if (action == NERROR_SET)
		nerror = error;
	return (nerror);
}