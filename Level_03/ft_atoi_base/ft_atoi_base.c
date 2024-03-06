int	ft_tolower(char c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

int	ft_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

int	ft_check(char *str, int str_base)
{
	int			i;
	static char	base[17] = "0123456789abcdef";

	i = 0;
	base[str_base] = 0;
	while (ft_strchr(base, *str) && *str)
		str++;
	if (*str)
		return (0);
	return (1);
}

int	ft_atoi_base(const char *str, int str_base)
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
	result = 0;
	if (ft_check((char *)str, str_base))
	{
		while (*str)
		{
			result *= str_base;
			if (*str >= '0' && *str <= '9')
				result += *(str) - 48;
			else if (ft_tolower(*str) >= 'a' && ft_tolower(*str) <= 'f')
				result += *str - 87;
			str++;
		}
	}
	return (result * sign);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_atoi_base(av[1], atoi(av[2])));
	printf("\n");
	return (0);
} */
