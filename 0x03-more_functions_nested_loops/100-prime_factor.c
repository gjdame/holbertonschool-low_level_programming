#include <stdio.h>
/**
 * main - find largest prime number of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int x;
	unsigned long int y;

	x = 612852475143;
	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
			x = x / y;
	}
	printf("%lu\n", x);
	return (0);
}
