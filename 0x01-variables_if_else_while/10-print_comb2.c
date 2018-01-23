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
			putchar(x);
			putchar(y);
			if (!(x == '9' && y == '9'))
			{
			putchar(',');
			putchar(' ');
			}
		}
		}
	putchar('\n');
	return (0);
}
