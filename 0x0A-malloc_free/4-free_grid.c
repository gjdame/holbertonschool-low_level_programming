#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
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
