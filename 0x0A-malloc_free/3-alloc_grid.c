#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of ints
 * @width: int
 * @height: int
 *
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int *s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(width * height * sizeof(int));
	i = 0;
	while (width[i] != '\0')
	{
		j = 0;
		while (height[j] != '\0')
		{
			s = [i][j];
			j++;
		}
		i++;
	}
