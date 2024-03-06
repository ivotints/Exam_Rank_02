#include <unistd.h>

int	main(int ac, char **av)
{
	while (ac == 2 && *av[1])
	{
		while (*av[1] && (*av[1] == 32 || *av[1] == '\t'))
			av[1]++;
		while (*av[1] && !(*av[1] == 32 || *av[1] == '\t'))
			write(1, av[1]++, 1);
		while (*av[1] && (*av[1] == 32 || *av[1] == '\t'))
			av[1]++;
		if (*av[1])
			write(1, " ", 1);
	}
	write(1, "\n", 1);
	return (0);
}
