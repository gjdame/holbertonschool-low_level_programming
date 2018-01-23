#include "holberton.h"
/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return:0
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
