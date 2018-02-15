#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - prints memory for an array. copies the calloc function
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
