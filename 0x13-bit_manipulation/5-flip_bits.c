#include "holberton.h"
/**
 *
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int count;
	x = n ^ m;

	count = 0;

	while (x > 0)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
