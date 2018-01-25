#include "holberton.h"
/**
 * print_numbers - prints numbers 0-9
 *
 * print_numbers: prints numbers 0-9
 *
 */
void print_numbers(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
