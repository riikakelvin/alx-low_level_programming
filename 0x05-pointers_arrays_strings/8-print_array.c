#include "main.h"
/**
 *print_array - prints n elements from an array
 *@a: consideration/ parameter
 *@n: consideration/ parameter
 */
void print_array(int *a, int n)
{	int k;

	for (a = 0; k < n; k++)
	{
	if (k != n - 1)
	printf("%d, ", a[k]);
	else
	printf("%d", a[k]);
	}
	printf("\n");
}
