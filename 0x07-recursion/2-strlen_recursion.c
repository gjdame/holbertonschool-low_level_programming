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
	if (s == NULL)
		return (0);
	 return = 1 + _strlen_recursion(s + 1);
}
