#include "holberton.h"
/**
 * print_last_digit - prints last digit
 * @x:input number
 *
 * print_last_digit: prints last digit of int x
 * Return:@result
 */
int print_last_digit(int x)
{
	int result;

	if (x >= 0)
	{
		result = x % 10;
	}
	if (x < 0)
	{
		x = -x;
		result = x % 10;
	}
	_putchar(result + '0');
	return (result);
}
