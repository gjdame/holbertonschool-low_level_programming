#include "holberton.h"
/**
 * print_alphabet_x10 - nested loops
 *
 * print_alphabet_x10: prints lowercase alphabet x10
 * Return:0
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 9)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
