#include "main.h"
#include <stdio.h>

/**
 * free_grid -  a function that frees a 2 dimensional grid 
 * previously created by your alloc_grid function.
 * @grid: the grid
 * @height: height of the grid
 */


void free_grid(int **grid, int height)
{
	int U;

	for (U = 0; U < height; U++)
		free(grid[U]);
	free(grid);
}
