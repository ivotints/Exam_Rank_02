char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (j < --i)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char s[] = "Sahsa";
	printf("%s", ft_strrev(s));

} */
