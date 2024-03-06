#include <stdio.h>
#include <stdlib.h>

void	fprime(int num)
{
	int	i;

	i = 2;
	if (num == 1)
		printf("1");
	while (num != 1)
	{
		if (num % i == 0)
		{
			printf("%d", i);
			num /= i;
			if (num != 1)
				printf("*");
		}
		else
			i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
