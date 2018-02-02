#include "holberton.h"
/**
 * cap_string - converts string to uppercase from lower
 * @s: char pointer
 * cap_string: converts string to uppercase from lower
 *
 * Return: char pointer
 */
char *cap_string(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == ' ' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '\n' || s[i - 1] == '\t')
			{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
			}
		i++;
	}
	return (s);
}
