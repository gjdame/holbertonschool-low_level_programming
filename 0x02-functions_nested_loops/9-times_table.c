#include "holberton.h"
/**
 * 9-times_table.c - prints 9 times table
 *
 *
 */
void times_table(void)
{
	int x;
	int y;
	for (x = 0; x <= 9 ; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			x = x * y;
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(',');
			_putchar(' ');
			}
		_putchar('\n');
	}
}
