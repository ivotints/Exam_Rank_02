#include <unistd.h>

void	ft_putnbr(int num)
{
	char	c;

	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		c = num + '0';
		write(1, &c, 1);
	}
}

int	main(int ac, char **av)
{
	(void)av;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
