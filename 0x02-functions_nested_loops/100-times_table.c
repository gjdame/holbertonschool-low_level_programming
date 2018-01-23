#include "holberton.h"
/**
 * print_times_table - prints the times table n starting at 0
 * @n : number of times table is printed
 *
 * print_times_table: prints times table.
 * If greater than 15 or less than 0, return error.
 *
 * Return:
 */
void print_times_table(int n)
{
	int x;
	int y;
	int z;

	if (!(n < 0 || n > 15))
		for (x = 0; x <= n ; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				z = x * y;
				if (z < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(z / 100 + '0');
					_putchar(z / 10 - 10 + '0');
					_putchar(z % 10 + '0');
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
}
