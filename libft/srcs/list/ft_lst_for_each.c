#include "list.h"

void	ft_lst_for_each(t_list *lst, int (*f)())
{
	t_list *tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}