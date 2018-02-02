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

	len_src = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	i = 0;
	while (i < len_src + 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	return (dest);
}
