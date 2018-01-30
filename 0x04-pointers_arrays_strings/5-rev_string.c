#include "holberton.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * rev_string - prints a string in reverse
 * @s : char pointer
 *
 * rev_string: prints a string followed by a new line
 *
 */
void rev_string(char *s)
{
	char b;
	int y;
	int x;
	int a;

	y = _strlen(s);
	x = _strlen(s) / 2;
	for (a = 0; a < x; a++)
	{

		b = s[a];
		s[a] = s[y - 1 - a];
		s[y - 1 - a] = b;
	}
}
