#include "holberton.h"
/**
 * jack_bauer - prints time
 *
 * jack_bauer: prints time 00:00 to 23:59
 * Return: @result
 */
void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x <= 23 ; x++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar (x / 10 + '0');
			_putchar (x % 10 + '0');
			_putchar (':');
			_putchar (y / 10 + '0');
			_putchar (y % 10 + '0');
			_putchar ('\n');
		}
	}
}
