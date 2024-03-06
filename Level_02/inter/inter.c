#include <unistd.h>

int	ft_check(char *str, int i)
{
	int	j;

	j = 0;
	while (i > j)
	{
		if (str[j] == str[i])
			return (0);
		j++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (ac == 3 && av[1][i])
	{
		j = 0;
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				if (ft_check(av[1], i))
					write(1, &av[1][i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
