#include <stdlib.h>

int	ft_sizen(long long n)
{
	int	result;

	result = 0;
	if (n < 0)
	{
		n *= -1;
		result++;
	}
	while (n > 0)
	{
		result++;
		n = n / 10;
	}
	return (result);
}

void	ft_convert(char *result, long long nb, int size)
{
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	result[size] = '\0';
	while (nb)
	{
		result[size - 1] = (nb % 10) + '0';
		nb = nb / 10;
		size--;
	}
}

char	*ft_itoa(int nbr)
{
	char		*result;
	int			size;
	long long	nb;
	char		*o;

	if (nbr == 0)
	{
		o = (char *)malloc(2);
		o[0] = '0';
		o[1] = 0;
		return (o);
	}
	nb = nbr;
	size = ft_sizen(nb);
	result = (char *)malloc((size + 1) * sizeof(char));
	if (!result)
		return (0);
	ft_convert(result, nb, size);
	return (result);
}

/* #include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
} */
