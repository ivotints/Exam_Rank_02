unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	i;
	unsigned char	res;
	unsigned char	temp;

	temp = octet;
	res = 0;
	i = 128;
	while (i > 8)
	{
		res = (res * 2) + (temp / i);
		if (temp / i == 1)
				temp -= i;
		i /= 2;
	}
	res = res + octet * 16;
	return (res);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		printf("%d\n", swap_bits((unsigned char)atoi(av[1])));
	}
} */
