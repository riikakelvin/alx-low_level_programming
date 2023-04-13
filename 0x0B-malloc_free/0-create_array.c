#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * and initializes it with specific char
 * @size: size of mem allocated to array
 * @c: specific character to initialize arrays created with
 * Return: NULL if size = 0 (Success)
 * or a pointer to the array, or NULL (Failed test)
 */
char *create_array(unsigned int size, char c)
{	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
