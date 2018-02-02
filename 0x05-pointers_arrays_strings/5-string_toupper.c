#include "holberton.h"
/**
 * string_toupper - converts string to uppercase from lower
 * @char: char pointer
 * string_toupper: converts string to uppercase from lower
 *
 * Return: char pointer
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i]  >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
