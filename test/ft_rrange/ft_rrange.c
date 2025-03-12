#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *res;
	int len;
	int i;

	i = 0;
	len = end - start;
	if (len < 0)
		len = -len;
	len++;
	res = malloc(sizeof (int) * len + 1);
	if (!res)
		return 0;
	if (start >= end)
	{
		while (start >= end)
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	else if (start <= end)
	{
		while (start <= end)
		{
			res[i] = end;
			end--;
			i++;
		}
	}
	res[len] = '\0';
	return (res);
}
