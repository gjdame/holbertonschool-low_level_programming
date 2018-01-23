#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char a;

	a = 'z';
	for (; a >= 'a' ; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
