#include "holberton.h"
/**
 * puts2 - prints a string
 * @str : char pointer
 *
 * puts2: prints a string followed by a new line
 *
 */
void puts2(char *str)
{
	int a;
	int b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < a)
	{
		_putchar(str[b]);
		b += 2;
	}
	_putchar('\n');
}
