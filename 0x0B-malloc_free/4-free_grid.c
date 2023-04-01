#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2D array of ints previously
 * created by your malloc_grid function
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int d = 0;

	if (grid == NULL)
		return;
	while (d < height)
		free((int *)grid[d++]);
	free(grid);
}
