#include <stdlib.h>

void	ft_strdelsplit(char **split)
{
	char	**tmp;

	tmp = split;
	while (*split)
	{
		free(*split);
		split++;
	}
	free(tmp);	
}