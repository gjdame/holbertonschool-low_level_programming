#include "holberton.h"
/**
 * leet - encodes into leet speak
 * @s: char pointer
 * leet: encodes into leet speak
 * Return: char pointer s
 */
char *leet(char *s)
{
	int i;
	int j;
	char a[] = "a4A4e3E3o0O0t7T7l1L1";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
				s[i] = a[j + 1];
			j += 2;
		}
		i++;
	}
	return (s);
}
