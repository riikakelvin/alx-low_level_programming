#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2array of integers
 *@width: width of grid
 *@height: height of grid
 * Return:
 */
int **alloc_grid(int width, int height)
{	int **array, k, e;
	int l = width * height;

	if (l <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < height; k++)
	{
		array[k] = (int k)malloc(sizeof(int *) * width);
		if (array[e] == NULL)
	}
	for (k-- ; k >= 0; k--)
	{
		free(array[k]);
		free(array);
		return (NULL);
	}
	for (k = 0; k < height; k++)
		for (e = 0; e < width; e++)
			array[k][e] = 0;
	return (array);
}


}
