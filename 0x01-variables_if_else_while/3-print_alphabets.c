#include <stdio.h>
/**
 * main - prints alphabet in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char a;

	a = 'a';
	for ( ; a <= 'z' ; a++)
	{
		putchar(a);
	}

	a = 'A';

	for ( ; a <= 'Z' ; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
