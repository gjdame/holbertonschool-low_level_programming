#include <stdio.h>
/**
 * main - first 50 fibonacci numbers
 *
 * Return:0
 */
int main(void)
{
	unsigned long x;
	unsigned long y;
	int n;
	unsigned long sum;

	sum = 0;
	y = 1;
	x = 0;
	n = 0;
	for (n = 0; n < 98; n++)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf("%lu", sum);
		if (n < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
