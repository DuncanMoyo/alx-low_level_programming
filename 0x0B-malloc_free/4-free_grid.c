#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: pointer to grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
