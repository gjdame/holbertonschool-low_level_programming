#include "holberton.h"
/**
 * flip_bits - flip bits and count num of flips
 * @n: int
 * @m: int to compare to n
 * Return: int
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
