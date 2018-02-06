#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string that has chars to search for in @s
 * counter for each time @accept is found in @s. Can only count once
 * _strspn: gets length of a prefix substring
 *
 * Return: counter
 */
unsigned int _strspn(char *s, char *accept)
{
	int c;
	int i;
	int j;
	int len_s;
	int len_acc;

	c = 0;
	i = 0;
	j = 0;
	len_s = 0;
	len_acc = 0;
	while (s[i] != '\0')
	{
		len_s++;
		i++;
	}

	i = 0;
	while (accept[i] != '\0')
	{
		len_acc++;
		i++;
	}

	for (i = 0; i <= len_acc; i++)
	{
		for (j = 0; j <= len_s; j++)
		{
			if (s[j] == accept[i])
			{
				c++;
				break;
			}
		}
	}
	return (c);
}
