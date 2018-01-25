#include "holberton.h"
/**
 * print_line - prints line
 * @n: length for line
 *
 * print_line: prints line of n length
 *
 */
void print_line(int n)
{
	int x;

	if (!(n <= 0))
	{
	for (x = 0; x < n; x++)
		_putchar('_');
	}
	_putchar('\n');
}
