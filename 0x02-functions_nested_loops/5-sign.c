#include "holberton.h"
/**
 * print_sign - returns whether number is pos, neg, or zero
 * @n: number being checked
 *
 * print_sign: returns whether number is +, -, or 0.
 * Return: @result
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else
	{
		_putchar('0');
		result = 0;
	}
	return (result);
}
