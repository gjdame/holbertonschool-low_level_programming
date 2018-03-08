#include "holberton.h"
#include <limits.h>
/**
 * print_binary - print binary number
 * @n: unsigned long int
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	mask <<= ((sizeof(mask) * 8) - 1);

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0)
			mask = mask >> 1;
		else
			break;
	}
	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
	}
}
