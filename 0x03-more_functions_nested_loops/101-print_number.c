#include "holberton.h"
/**
 * print_number - print a number
 * @n: int
 * print_number: prints an integer
 *
 */
void print_number(int n)
{
	int c;
	int i;
	int x;
	unsigned int y;
	unsigned int z;

	i = 1;
	y = n;
	z = n;
	c = 0;
	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		y = y + 1;
		y = y * -1;
		y = y + 1;
		z = z + 1;
		z = z * -1;
		z = z + 1;
	}
	while (y > 0)
	{
		y = y / 10;
		c++;
	}
	for (x = 1; x < c; x++)
	{
		i = i * 10;
	}
	for (x = 0; x < c; x++)
	{
		_putchar(z / i + '0');
		z = z % i;
		i = i / 10;
	}

}
