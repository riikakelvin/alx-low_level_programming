#include "main.h"

/**
 * print_line - displays  a straight line
 * @n - the number of lines being dran
 * Return: null
 */
void print_line(int n)
{	int k;
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 0; k < n; k++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
