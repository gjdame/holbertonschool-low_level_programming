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
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack [i + j] != needle[j])
				    break;
				j++;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (0);
}
