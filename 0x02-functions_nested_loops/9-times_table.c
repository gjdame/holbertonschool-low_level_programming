#include "holberton.h"
/**
 * times_table - prints 9 times table
 *
 * times_table: prints 9 times table to 9
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 1; x <= 9 ; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		for (y = 1; y <= 9; y++)
		{
			z = x * y;
				if (z <= 9)
				{
					_putchar(z + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
					if (y >= 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
		}
		_putchar('\n');
	}
}
