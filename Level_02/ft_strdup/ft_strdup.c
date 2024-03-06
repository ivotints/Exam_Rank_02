#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char *dup;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc(sizeof(char) * (++i));
	if (!dup)
		return (NULL);
	while (i-- > 0)
		dup[i] = src[i];
	return (dup);
}

/* #include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%s %p \n", ft_strdup("SORCE"), ft_strdup("SORCE"));
	printf("%s %p \n",    strdup("SORCE"), strdup("SORCE"));
} */
