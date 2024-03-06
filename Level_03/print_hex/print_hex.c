#include <unistd.h>

void	ft_puthex(int num)
{
	char	c;

	if (num >= 16)
	{
		ft_puthex(num / 16);
		ft_puthex(num % 16);
	}
	if (num < 10)
	{
		c = '0' + num;
		write(1, &c, 1);
	}
	else if (num < 16)
	{
		c = 'a' + num - 10;
		write(1, &c, 1);
	}
}

int	ft_atoi(char *str)
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
	if (ac == 2)
	{
		ft_puthex(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
	return (0);
}
