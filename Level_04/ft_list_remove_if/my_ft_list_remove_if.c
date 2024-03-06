#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*cur;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	cur = *begin_list;
	if ((*cmp)(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	ft_list_remove_if(&(*begin_list)->next, data_ref, cmp);
}

/* void	print_list(t_list *head)
{
	while(head)
	{
		printf("%s", (char *)head->data);
		head = head->next;
		if (head)
			printf(", ");
	}
	printf("\n");
}

int	cmp_string(void *s1, void *s2)
{
	while (*(char *)s1 && *(char *)s2 && *(char *)s1 == *(char *)s2)
	{
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}

int main()
{
	t_list *head;
	t_list *cur;
	int	i;
	int	n;
	char data_ref[6] = "Katya";
	char	text[4][6] = {"Sasha", "Dasha", "Katya", "Masha"};

	head = malloc(sizeof(t_list));
	cur = head;
	i = 0;
	n = sizeof(text) / sizeof(text[0]);
	while (i < n)
	{
		cur->data = &text[i];
		if (i < n - 1)
		{
			cur->next = malloc(sizeof(t_list));
			cur = cur->next;
		}
		else
			cur->next = NULL;
		i++;
	}
	printf("Original list: "); print_list(head);
	ft_list_remove_if(&head, data_ref, cmp_string);
	printf("New list:      "); print_list(head);
	while (head)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
	return (0);
} */

