#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of ints
 * @min: minimum value contained
 * @max: maximum value contained
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int x;
	int i;
	int *s;

	if (min > max)
		return (NULL);
	x = max - min;
	x++;
	s = malloc(sizeof(int) * x);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < x)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}
