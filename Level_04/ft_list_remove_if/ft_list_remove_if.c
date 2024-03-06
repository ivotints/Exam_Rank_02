#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*cur;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	cur = *begin_list;
	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
}

/* #include <stdio.h>

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%d ", *(int *)(list->data));
		list = list->next;
	}
	printf("\n");

}

int	cmp_int(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}

int	main()
{
	t_list	*head;
	t_list	*current;
	int	i;
	int	remove_value;

	head = malloc(sizeof(t_list));
	int	values[] = {1, 2, 3, 4, 5, 1, 7, 8, 9};
	int n = sizeof(values) / sizeof(values[0]);
	current = head;
	i = 0;
	while (i < n)
	{
		current->data = &values[i];
		if (i < n - 1)
		{
			current->next = malloc(sizeof(t_list));
			current = current->next;
		}
		else
			current->next = NULL;
		i++;
	}
	printf("Original list: 			");
	print_list(head);
	remove_value = 1;
	ft_list_remove_if(&head, &remove_value, cmp_int);
	printf("Modified list after removing %d: ", remove_value);
	print_list(head);

	while (head != NULL)
	{
		t_list *temp = head;
		head = head->next;
		free(temp);
	}
	return (0);
} */

