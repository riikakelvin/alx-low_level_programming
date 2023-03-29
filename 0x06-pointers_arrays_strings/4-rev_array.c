#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: function parameter
 * @n: function parameter
 * Return: 0
 */
void reverse_array(int *a, int n)
{	int k;
	int e;

	for (k = 0; k < n / 2; k++)
	{
	e = a[k];
	a[k] = a[n - 1 - k];
	a[n - 1 - k] = e;
	}
}
