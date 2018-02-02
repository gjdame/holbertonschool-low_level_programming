#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 *
 * _strcat: concatenates two strings
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int len_dest;
	int len_src;
	int i;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	i = 0;
	len_src = 0;
	while (src[len_src] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
		len_src++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
