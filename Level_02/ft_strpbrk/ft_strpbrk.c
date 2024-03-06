#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strpbrk("Shla Sasha po shosse", "123456"));
	printf("%s\n",    strpbrk("Shla Sasha po shosse", "123456"));
} */

