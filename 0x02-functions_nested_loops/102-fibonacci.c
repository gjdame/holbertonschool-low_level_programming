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
	x = 1;
	n = 0;
	printf("1, ");
	for (n = 0; n < 48; n++)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf("%lu", sum);
		if (n < 47)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
