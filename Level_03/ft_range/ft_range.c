#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	int	*result;

	if (start < end)
	{
		arr = (int *)malloc(sizeof(int) * (end - start + 1));
		result = arr;
		while (start <= end)
			*(arr++) = start++;
	}
	else
	{
		arr = (int *)malloc(sizeof(int) * (start - end + 1));
		result = arr;
		while (end <= start)
			*(arr++) = start--;
	}
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	int i;
	int	*arr;

	i = 0;
	arr = ft_range(9, 0);
	while (i < 10)
		printf("%d", arr[i++]);
	return (0);
} */
