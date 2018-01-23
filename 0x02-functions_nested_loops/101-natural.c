#include <stdio.h>
/**
 * main - list sum of multiples of 3 or 5
 *
 * 101-natural.c - lists sum of multiples of 3 or 5
 * Adds multiples of those numbers
 *
 * Return:0
 */
int main(void)
{
	int sum;
	int x;

	x = 0;
	sum = 0;
	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum = sum + x;
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
