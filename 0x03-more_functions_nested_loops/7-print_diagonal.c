#include "holberton.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number of lines
 *
 * print_diagonal: prints diagonal line of '\'
 *
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (!(n <= 0))
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar (' ');

			}
			_putchar(92);
			_putchar('\n');
		}
	}
	if (n <= 0)
	_putchar('\n');
}
