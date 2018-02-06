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
	{
		return (0);
	}
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] == haystack[i + j] && needle[j] != '\0')
			{
				j++;
			}
		}
		i++;
	}
	return (haystack + i);
}
