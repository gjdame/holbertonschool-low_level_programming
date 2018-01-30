#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: char pointer
 *
 * puts_half: prints half of a string
 */
void puts_half(char *str)
{
	int a;
	int b;

	b = 0;
	a = 0;
	if (!(str == NULL))
	{
		while (str[a] != '\0')
		{
			a++;
		}
		if (a % 2 != 0)
		{
			a = a + 1;
		}
		b = a / 2;
		while (str[b] != '\0')
		{
			_putchar(str[b]);
			b++;
		}
	}
		_putchar('\n');
}
