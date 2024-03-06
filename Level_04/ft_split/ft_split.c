#include <stdlib.h>

int	count_strings(char const *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			count++;
		while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	return (i);
}

char	*ft_word(char *str)
{
	int		len_word;
	int		i;
	char	*word;


	len_word = ft_strlen_sep(str);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	i = -1;
	while (++i < len_word)
		word[i] = str[i];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**strings;
	int		i;

	strings = (char **)malloc(sizeof(char *) * (count_strings(str) + 1));
	if (strings == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
		if (*str)
			strings[i++] = ft_word(str);
		while (*str && !(*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
	}
	strings[i] = '\0';
	return (strings);
}

/* #include <stdio.h>

int main(void)
{
	char **strs;
	char str[] = "     hishihhf  \n  j8kj 7uhg fd  \t   r";
	strs = ft_split(str);
	while (*strs)
	{
		printf("%s\n", *strs);
		strs++;
	}
} */
