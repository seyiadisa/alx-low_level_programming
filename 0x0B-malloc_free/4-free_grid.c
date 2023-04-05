#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid created by `alloc_grid` function
 * @grid: pointer to the 2d grid
 * @height: height of the 2d grid (rows)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
