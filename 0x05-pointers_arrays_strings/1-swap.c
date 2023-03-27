#include "main.h"
/**
 * swap_int - swaps two integer values
 * @a: value of first integer
 * @b: value of second integer
 * Return nothing
 */
void swap_int(int *a, int *b)
{	int k;
	k = *a;
	*a = *b;
	*b = k;
}
