#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int x;

	x = '0';
	for (; x <= '9'; x++)
	{
		putchar(x);
		if (x < '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
