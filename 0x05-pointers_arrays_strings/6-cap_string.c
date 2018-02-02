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
	int j;
	char a[] = {' ', '\t', '\n', ',', '.', '!', '?', '"', ')', '(', '{', '}'};

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i - 1] == a[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32;
			j++;
		}
		i++;
	}
	return (s);
}
