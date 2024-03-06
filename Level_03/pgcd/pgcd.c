#include <stdio.h>
#include <stdlib.h>

void pgcd(int a, int b)
{
	int	i;
	int	res;

	i = 1;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			res = i;
		i++;
	}
	printf("%d", res);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return (0);
}
