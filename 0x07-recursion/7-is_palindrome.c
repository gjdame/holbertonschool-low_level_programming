#include "holberton.h"
#define NULL 0
/**
 * _strlen_recursion - checks stringlength
 * @s: string to be checked
 *
 * Return: @i for length
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s)
	{
		i = i + _strlen_recursion(s + 1);
		return (i++);
	}
	return (0);
}
/**
 * palindrome - checks if palindrome
 * @s: char string
 * @y: length of a end of string
 * Return: if string is palindrome (1) or not (0)
 */
int palindrome(char *s, int y)
{
	if ((*s) != *(s + y))
		return (0);
	if (*(s + 1) == '\0')
		return (1);
	return (palindrome(s + 1, y - 2));
}
/**
 * is_palindrome - checks if input is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	int y;

	y = _strlen_recursion(s);
	if (*s == NULL)
		return (0);
	return (palindrome(s, y - 1));
}
