#include "holberton.h"
/**
 * print_rev - prints a string
 * @s: char pointer
 *
 * print_rev: prints a string followed by a new line
 *
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
