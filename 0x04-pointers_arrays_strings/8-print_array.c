#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array
 * @n: int
 * @a: int pointer
 *
 * print_array: print n elements of an array
 *
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
