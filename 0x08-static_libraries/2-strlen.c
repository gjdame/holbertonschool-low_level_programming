#include "holberton.h"
/**
 * _strlen - returns length of string
 * @s: char pointer
 *
 * _strlen: returns length of pointer char *s
 *
 * Return: int
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
