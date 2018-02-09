#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 * @n: bytes to be printed
 *
 * _strncat: concatenates two strings
 *
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest;
	int i;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
