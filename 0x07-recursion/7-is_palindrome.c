#include "holberton.h"
#define NULL 0
/**
 * is_palindrome - checks if input is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if true, 0 if false
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
int palindrome(char *s, int x, int y)
{
	if((s + x) != (s + y))
		return (0);
	if((s + x) == (s + y) && y / 2 < y)
		return (palindrome(s, x + 1, y - 1));
	return (1);
}
int is_palindrome(char *s)
{
	int y;
	if (*s == NULL)
		return (0);
	y = _strlen_recursion(s);
	return (palindrome(s, 0 , y));
}
