#include "main.h"
#include <stdlib.h>

/**
 *  free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 *  @grid: the dimensional grids to be freed
 *  @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int it;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
