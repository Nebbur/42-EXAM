#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int *arr;
	int i;

	i = 0;
	if (start > end)
		arr = (int *)malloc(sizeof(int) * (start - end + 1));
	else
		arr = (int *)malloc(sizeof(int) * (end - start + 1));
	while (start != end)
	{
		arr[i++] = end;
		if (start > end)
			end++;
		else
			end--;
	}
	arr[i] = end;
	return (arr);
}
