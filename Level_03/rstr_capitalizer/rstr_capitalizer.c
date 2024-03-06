#include <unistd.h>

void	ft_rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			write(1, &str[i++], 1);
		while (str[i] && !(str[i] == ' ' || str[i] == '\t'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			if (str[i + 1] == ' ' || str[i + 1] == ' ' || str[i + 1] == 0)
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			write(1, &str[i++], 1);
		}
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		write(1, "\n", 1);
	while (i < ac)
	{
		ft_rstr_capitalizer(av[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
