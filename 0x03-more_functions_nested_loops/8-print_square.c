#include "holberton.h"
/**
 * print_square - prints square of n size
 * @size: int
 *
 * print_square: prints square of n size
 *
 */
void print_square(int size)
{
	int x;
	int y;

	if (!(size <= 0))
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
