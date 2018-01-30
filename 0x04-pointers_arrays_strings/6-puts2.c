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

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
