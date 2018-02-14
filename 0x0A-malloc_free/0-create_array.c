#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes a specific char
 * @size: unsigned int
 * @c: char
 *
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	s = malloc((size) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
