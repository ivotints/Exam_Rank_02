#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*arr;
	int	*result;

	if (end < start)
	{
		arr = (int *)malloc(sizeof(int) * (start - end + 1));
		result = arr;
		while (end <= start)
			*(arr++) = end++;
	}
	else
	{
		arr = (int *)malloc(sizeof(int) * (end - start + 1));
		result = arr;
		while (start <= end)
			*(arr++) = end--;
	}
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	int i;
	int	*arr;

	i = 0;
	arr = ft_rrange(0, -3);
	while (i < 10)
		printf("%d", arr[i++]);
	return (0);
} */
