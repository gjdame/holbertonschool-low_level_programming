#include "holberton.h"
#define NULL 0
/**
 * _strlen_recursion - function for length of string
 * @s: string
 *
 * Return: int length of string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s)
	{
		i = i + _strlen_recursion(s + 1);
		return (i);
	}
	return (0);
}
