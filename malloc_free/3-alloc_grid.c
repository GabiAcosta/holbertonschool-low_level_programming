#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j, freeCheck = 0;
	int **grid;

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
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = 0; i < freeCheck; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		freeCheck++;
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
