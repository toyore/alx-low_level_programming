#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional grid of integers.
 *
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: A pointer to a newly allocated 2D array of integers,
 *         or NULL on failure or if width/height are 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for the 2D array of integers */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if allocation fails */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/* Initialize each element of the grid to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}

	}

	return (grid);
}
