#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimentional grid
 * @grid: grid to be freed
 * @height: height of the grid
 *
 * Return: void
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
