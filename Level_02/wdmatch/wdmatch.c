#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[2][j])
			if (av[1][i] == av[2][j++])
				i++;
		if (av[1][i] == 0)
			write(1, av[1], i);
	}
	write(1, "\n", 1);
}
