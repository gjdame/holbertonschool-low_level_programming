#include "holberton.h"
/**
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int count;
	unsigned int sum;
	unsigned int x;

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			i++;
		else if	(b[i] == '0')
			i++;
		else
			return (0);
	}

	sum = 0;
	x = 1;

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
	i = 0;
	while (b[i] != '\0')
	{
		sum += ((b[i] - '0') * x);
		x = x / 2;
		i++;
	}
	return (sum);
}
