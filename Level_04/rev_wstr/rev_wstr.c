#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	safe;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		while (--i >= 0)
		{
			while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			if (i >= -1)
			{
				safe = i + 1;
				while (av[1][safe] && av[1][safe] != ' ' && av[1][safe] != '\t')
					write(1, &av[1][safe++], 1);
				if (i > 0)
					write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
