#include "main.h"

/**
 * alloc_grid - creates a pointer to a 2-d grid of integers
 * @width: width of grid (columns)
 * @height: height of grid (rows)
 *
 * Return: pointer to grid; NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
