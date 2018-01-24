#include <stdio.h>
/**
 * main -
 *
 * Return:
 */
int main(void)
{
	int x;
	int y;
	int n;
	unsigned long sum;
	sum = 0;
	y = 1;
	x = 1;
	n = 0;
	for(n = 0; n <= 50; n++ )
	{
		sum = x + y;
		x = y;
		y = sum;
		printf("%lu", sum);
		if (n < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
