#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
