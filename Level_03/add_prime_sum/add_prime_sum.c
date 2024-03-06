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
	int	i;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
		if (*(str++) == '-')
			sign = -1;
	i = -1;
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	result = 0;
	while (*str)
		result = result * 10 + (*(str++) - '0');
	return (result * sign);
}

int	ft_is_prime(int num)
{
	int	i;

	i = 2;
	while (i < num)
		if (num % i++ == 0)
			return (0);
	return (1);
}

int	ft_add_prime_sum(int num)
{
	int	i;
	int	res;

	if (num <= 1)
		return (0);
	i = 3;
	res = 2;
	while (i <= num)
	{
		if (ft_is_prime(i))
			res += i;
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr(ft_add_prime_sum(ft_atoi(av[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
