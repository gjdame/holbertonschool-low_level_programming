#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: char pointer
 * @c: char
 * _strchr: locates character in a string and returns a pointer
 * to the first occurence of @c in the string @s
 * Return: address of first occurence of @c in @s
 */
char *_strchr(char *s, char c)
{
	int i;
	int len;

	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;
	while (i <= len)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}
