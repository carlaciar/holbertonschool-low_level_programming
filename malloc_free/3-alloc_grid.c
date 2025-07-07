#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: width/columns of 2 dimensional array
 * @height: height/rows of 2 dimensional array
 *
 * Return: NULL if height or weight is <= 0
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return (NULL);
		}

		j = 0;
		while (j < height)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
