#include "holberton.h"
/**
 * _memcpy - copies the memory area
 * @dest: destination
 * @src: src
 * @n: bytes to copied
 * _memcpy: copies the memory area
 *
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}
