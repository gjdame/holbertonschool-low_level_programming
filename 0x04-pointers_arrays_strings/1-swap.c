#include "holberton.h"
/**
 * swap_int - swaps values of two int
 * @a: pointer int
 * @b: pointer int
 *
 * swap_int: swaps values of two ints
 *
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *b;
	d = *a;
	*a = c;
	*b = d;
}
