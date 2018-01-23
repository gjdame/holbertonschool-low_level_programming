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
	_putchar(_abs(x % 10) + '0');
	return (_abs(x % 10));
}
