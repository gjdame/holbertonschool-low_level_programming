#include "holberton.h"
/**
 * reverse_array - reverses array of ints
 * @a: array of ints
 * @n: num of elements to swap
 *
 * reverse_array: reverses array of ints
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		i++;
	}
}
