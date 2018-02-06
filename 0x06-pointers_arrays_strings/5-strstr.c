#include "holberton.h"

/**
 * _strstr - finds 1st occurence of substring
 * @haystack: string to be searched
 * @needle: string to find in haystack
 * _strstr: 1st occurents of substring
 *
 * Return: beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{

	int i;
	int j;

	if (needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (0);
}
