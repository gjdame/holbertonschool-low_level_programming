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
	int len_h;
	int len_n;

	i = 0;
	j = 0;
	len_n = 0;
	len_h = 0;
	while (haystack[i] != '\0')
	{
		len_h++;
		i++;
	}
	i = 0;
	while (needle[i] != '\0')
	{
		len_n++;
		i++;
	}
	i = 0;
	while (i <= len_h)
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
	if (j != len_n)
		return (0);
	return (haystack + i);
}
