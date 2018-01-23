#include <stdio.h>
/**
 * main - prints all combinations of two digit numbers
 *
 * no repeats on combinations
 *
 * Return:0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0 ; x < 100 ; x++)
	{
		for (y = x + 1 ; y < 100 ; y++)
		{
			if (x / 10 <= y / 10)
			{
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
				putchar(' ');
				putchar(y / 10 + '0');
				putchar(y % 10 + '0');
				if (!(x == 98 && y == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
