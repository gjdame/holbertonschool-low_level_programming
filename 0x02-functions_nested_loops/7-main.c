#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(76);
	print_last_digit(0);
	r = print_last_digit(-183);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
