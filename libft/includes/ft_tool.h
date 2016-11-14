#ifndef FT_TOOL
# define FT_TOOL

# include <inttypes.h>
# include "libft.h"
# include "ft_printf.h"
# include "ft_unix.h"
# include "list.h"
# include "get_next_line.h"
# include "ft_time.h"
# include "ft_random.h"

void	ft_tab_reverse(int32_t *tab, uint32_t size);
void	ft_strdelsplit(char **split);
size_t	ft_strstrlen(char **tab);

#endif