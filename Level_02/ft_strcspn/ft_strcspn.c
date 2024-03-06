#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/* #include <string.h>

int	main(void)
{
	printf("%lu\n", ft_strcspn("Shla Sasha po shosse123", "a"));
	printf("%lu\n",	strcspn("Shla Sasha po shosse123", "a"));
} */
