#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers between 0 and 9
 * @v: number under consideration
 * Return: 0 when succesful
 */
void print_numbers(void)
{	int v;

	for (v = 0; v <= 9; v++)
	{
	_putchar(v + '0');
	}
	_putchar('\n');
}
