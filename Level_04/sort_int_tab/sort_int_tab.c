void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

/* #include <stdio.h>

int main() {
	int arr[] = {5, 3, 8, 2, 7, 1, 9, 4, 6, 6};
	unsigned int size = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	for (unsigned int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	sort_int_tab(arr, size);
	printf("Sorted array:   ");
	for (unsigned int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
 */
