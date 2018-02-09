#include "holberton.h"
/**
 * _strcpy - copies string pointed by src
 * @dest: char pointer
 * @src: char pointer
 *
 * _strcpy: copies string pointed to by src to dest
 *
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
