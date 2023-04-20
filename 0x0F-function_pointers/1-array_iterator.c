#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes parameters on presented arrays
 * @size: size of array
 * @action: pointer to the function required
 * @array: array parameter
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
