#include "holberton.h"
#define NULL 0
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring being searched for
 *
 * Return: location of beginning of needle in haystack if it exists
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;


	if (needle[0] == NULL)
		return (haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
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
