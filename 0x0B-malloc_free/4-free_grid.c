#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function frees two dimensional grids
 * @grid: first block to be freed
 * @height: second grid to be cleared
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
