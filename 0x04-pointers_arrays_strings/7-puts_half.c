#include "holberton.h"
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
	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 != 0)
	{
		a = a - 1;
	}
	b = a;
	b = b / 2;
	while (b < a)
	{
			_putchar(str[b]);
			b++;
		}
	_putchar('\n');
}
