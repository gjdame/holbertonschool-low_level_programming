#include <stdio.h>
/**
 * main - even fibonacci numbers up to 4million
 *
 * Return:0
 */
int main(void)
{
	unsigned long x;
	unsigned long y;
	int n;
	unsigned long sum;
	unsigned long total;

	total = 0;
	sum = 0;
	y = 1;
	x = 0;
	n = 0;
	for (n = 0; n < 33; n++)
	{
		sum = x + y;
		x = y;
		y = sum;
		if (sum % 2 == 0)
			total = sum + total;
	}
	printf("%lu\n", total);
	return (0);
}
