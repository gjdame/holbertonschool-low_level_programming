#include <stdio.h>
/**
 * main - prints alphabet in lowercase, skips q & e
 *
 * Return: 0
 */
int main(void)
{
	char a;

	a = 'a';
	for (; a <= 'z' ; a++)
	{
		if (!(a == 'q' || a == 'e'))
		putchar(a);
	}
	putchar('\n');
	return (0);
}
