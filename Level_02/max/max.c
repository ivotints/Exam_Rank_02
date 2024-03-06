int	max(int* tab, unsigned int len)
{
	int	max;
	unsigned int	i;

	i = 0;
	max = tab[0];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

/* #include <stdio.h>
int main(void)
{
	int ggg[] = {1, 6, 7, 3, 0, 34, 78, 3, 6};
	printf("%d", max(ggg, sizeof(ggg)/sizeof(int)));
} */
