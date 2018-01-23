#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = '0' ; x <= '9'; x++)
	{
		for (y = '0' ; y <= '9'; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
			if (!(x == '8' && y == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
