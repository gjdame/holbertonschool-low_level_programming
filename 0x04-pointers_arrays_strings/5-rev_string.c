#include "holberton.h"
/**
 * rev_string - prints a string in reverse
 * @s : char pointer
 *
 * rev_string: prints a string followed by a new line
 *
 */
void rev_string(char *s)
{
	int a;
	int b;
	int c;
	char cpy[100];

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		cpy[b] = s[b];
	}
	c = a - 1;
	for (b = 0 ; b < a; b++)
	{
		s[b] = cpy[c];
		c--;
	}
}
