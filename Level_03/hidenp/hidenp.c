#include <unistd.h>

char	*ft_hidenp(char *string, char *find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (find[i])
	{
		while (string[j])
		{
			if (find[j] == string[i])
				break ;
			j++;

		}
		if (string[j] == 0 && find[i])
			return ("0");
		i++;
	}
	return ("1");
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		write(1, ft_hidenp(av[2], av[1]), 1);
	}
	write(1, "\n", 1);
}
