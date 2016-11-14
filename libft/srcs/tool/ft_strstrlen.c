#include <string.h>

size_t	ft_strstrlen(char **split)
{
	size_t	size;

	size = 0;
	while (*split)
	{
		size++;
		split++;
	}
	return (size);	
}