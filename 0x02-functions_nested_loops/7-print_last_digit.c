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

	result = x % 10;
	if (result < 0)
	{
		result = -result;
	}
	return (result);
}
