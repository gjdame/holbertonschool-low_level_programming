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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
