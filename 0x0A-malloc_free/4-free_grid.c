#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2D grid
 * @grid: int double pointer grid
 * @height: int
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	if (height == 0)
		return;
	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
