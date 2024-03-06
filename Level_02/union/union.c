#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	abc[128] = {0};

	if (ac == 3)
	{
		i = -1;
		while (av[1][++i])
		{
			if (abc[(int)av[1][i]] == 0)
			{
				write(1, &av[1][i], 1);
				abc[(int)av[1][i]] = 1;
			}
		}
		i = -1;
		while (av[2][++i])
		{
			if (abc[(int)av[2][i]] == 0)
			{
				write(1, &av[2][i], 1);
				abc[(int)av[2][i]] = 1;
			}
		}
	}
	write(1, "\n", 1);
}
