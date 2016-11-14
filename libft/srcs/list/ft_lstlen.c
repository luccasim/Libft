#include "list.h"

size_t	ft_lstlen(t_list *list)
{
	t_list	*tmp;
	size_t	k;

	tmp = list;
	k = 0;
	while (tmp)
	{
		k++;
		tmp = tmp->next;
	}
	return (k);	
}