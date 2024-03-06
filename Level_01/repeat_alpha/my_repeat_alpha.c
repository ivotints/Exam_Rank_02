#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 2)
	{
		av++;
		i = 0;
		while (av[0][i])
		{
			if (av[0][i] >= 'a' && av[0][i] <= 'z')
			{
				j = 0;
				while (av[0][i] - 'a' >= j)
				{
					write(1, &av[0][i], 1);
					j++;
				}
			}
			else if (av[0][i] >= 'A' && av[0][i] <= 'Z')
			{
				j = 0;
				while (av[0][i] - 'A' >= j)
				{
					write(1, &av[0][i], 1);
					j++;
				}
			}
			else
				write(1, &av[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
