#include <stdlib.h>
/**
 * free_grid - displays 2D grid created
 * by alloc_grid function.
 * @grid:to be displayed
 * @height:grid heihgt
 * Return: grid display
 */
void free_grid(int **grid, int height)
{	int k;

	for (k = 0; k < height; k++)
	{
		free(grid);
	}
}
