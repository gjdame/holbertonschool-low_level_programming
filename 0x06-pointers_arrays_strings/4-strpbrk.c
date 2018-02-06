#include "holberton.h"
/**
 *_strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: bytes that are accepted
 * _strpbrk: searches a string for any set of bytes
 *
 * Return: starting point of earliest byte in @accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int len_s;
	int len_accept;
	char *p;

	p = 0;
	len_s = 0;
	len_accept = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len_s++;
		i++;
	}
	i = 0;
	while (accept[i] != '\0')
	{
		len_accept++;
		i++;
	}
	for (i = 0; i <= len_accept; i++)
	{
		for (j = 0; j <= len_s; j++)
		{
			if (s[i] == accept[j])
			{
				if (p == 0)
					p = (s + i);
				if ((s + i) < p)
					p = (s + j);
			}
		}
	}
	return (p);
}
