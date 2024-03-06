#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		temp;
	t_list	*orig;

	orig = lst;
	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = orig;
		}
		else
			lst = lst->next;
	}
	return (orig);
}
