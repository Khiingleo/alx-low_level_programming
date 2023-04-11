#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2dimensional array of integers
 * @grid: 2dimensional array to be freed
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
