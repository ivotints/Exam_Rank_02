#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		write(1, &"0123456789"[n], 1);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
		if (*(str++) == '-')
			sign = -1;
	result = 0;
	while (*str)
		result = result * 10 + (*(str++) - '0');
	return (result * sign);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 1;
		while (i < 10)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(ft_atoi(av[1]));
			write (1, " = ", 3);
			ft_putnbr(ft_atoi(av[1]) * i);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
