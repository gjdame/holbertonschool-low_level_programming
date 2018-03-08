#include "holberton.h"
/**
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int count;
	int sum;
	int x;

	sum = 0;
	x = 1;
	i = 0;
	while (b[count] != '\0')
	{
		count++;
	}

	count--;
	while (count > 0)
	{
		x = x * 2;
		count--;
	}
	while (b[i] != '\0')
	{
		if (b[i] > '1' || b[i] < '0')
			return(0);
		sum += ((b[i] - '0') * x);
		x = x / 2;
		i++;
	}
	return (sum);
}
