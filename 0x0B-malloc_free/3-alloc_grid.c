#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returs a pointer to a 2 dimensional array of integers
 * @width: first dimensional integer
 * @height: second dimensional integer
 * Return: NULL or failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
			free(grid[k]);
			}
		free(grid);
	return (NULL);
		}
	for (k = 0; k < width; k++)
	{
		grid[i][k] = 0;
	}
	}
	return (grid);
}
