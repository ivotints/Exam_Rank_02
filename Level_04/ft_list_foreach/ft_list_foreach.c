#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

/*
void multiply_by_2(void *num)
{
	*(int *)num *= 2;
	return ;
}

#include <stdlib.h>
#include <stdio.h>

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%d", *(int *)list->data);
		list = list->next;
		if (list)
			printf(", ");
	}
	printf("\n");
}

int main()
{
	t_list *list;
	t_list *head;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	unsigned int	i;


	list = malloc(sizeof(t_list));
	head = list;
	i = 0;
	while (i < sizeof(arr) / sizeof(arr[0]))
	{
		list->data = &arr[i];
		if (i < sizeof(arr) / sizeof(arr[0]) - 1)
		{
			list->next = malloc(sizeof(t_list));
			list = list->next;
		}
		else
			list->next = NULL;
		i++;
	}
	print_list(head);
	ft_list_foreach(head, multiply_by_2);
	print_list(head);
	list = head;
	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
} */
