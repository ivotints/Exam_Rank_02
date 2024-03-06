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
	