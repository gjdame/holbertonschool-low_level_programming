#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - encodes into leet speak
 * @s: char pointer
 * rot13: encodes into leet speak
 * Return: char pointer s
 */
char *rot13(char *s)
{

	int i;
	int j;
	char a[] = {'A', 'N', 'B', 'O', 'C', 'P', 'D', 'Q', 'E', 'R',
		    'F', 'S', 'G', 'T', 'H', 'U', 'I', 'V', 'J', 'W',
		    'K', 'X', 'L', 'Y', 'M', 'Z', 'N', 'A', 'O', 'B',
		    'P', 'C', 'Q', 'D', 'R', 'E', 'S', 'F', 'T', 'G',
		    'U', 'H', 'V', 'I', 'W', 'J', 'X', 'K', 'Y', 'L',
		    'Z', 'M', 'a', 'n', 'b', 'o', 'c', 'p', 'd', 'q',
		    'e', 'r', 'f', 's', 'g', 't', 'h', 'u', 'i', 'v',
		    'j', 'w', 'k', 'x', 'l', 'y', 'm', 'z', 'n', 'a',
		    'o', 'b', 'p', 'c', 'q', 'd', 'r', 'e', 's', 'f',
		    't', 'g', 'u', 'h', 'v', 'i', 'w', 'j', 'x', 'k',
		    'y', 'l', 'z', 'm'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = a[j + 1];
				break;
			}
			j += 2;
		}
		i++;
	}
	return (s);
}
