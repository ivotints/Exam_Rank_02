#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i > 0)
	{
		if (octet >= i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet %= i;
		i /= 2;
	}
}


/* int main(int ac, char **av)
{
	print_bits((unsigned char)atoi(av[1]));
} */

