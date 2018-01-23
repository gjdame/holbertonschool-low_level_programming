#include "holberton.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit
 * @x:input number
 *
 * print_last_digit: prints last digit of int x
 * Return:x
 */
int print_last_digit(int x)
{
	x = _abs(x);
	x = x % 10;
	_putchar(x + '0');
	return (x);
}
