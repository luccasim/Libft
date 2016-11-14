#include "ft_unix.h"

void	*ft_throw(int error)
{
	ft_nerror(error, NERROR_SET);
	return (NULL);
}