#include "libft.h"
#include "ft_unix.h"
#include <string.h>

int main (int ac, char **av)
{
	// char *dst = ft_strdup("test             ok");
	// char *dst2 = ft_strdup("test             ok");
	char dst[50] = {0};
	char dst2[50] = {0};
	uint32_t i,k,j;

	i = 0;
	while (i < 6)
	{
		dst[4 + i] = 'z';
		dst2[4 + i] = 'z';
		++i;
	}
	k = strlcat(dst, "abc", 6);
	j = ft_strlcat(dst2, "abc", 6);
	ft_printf("[{g:1}{%i}{%s}{e}][{w:1}{%i}{%s}{e}]\n", k, dst, j, dst2);
	return (0);
}