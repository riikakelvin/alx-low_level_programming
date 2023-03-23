#include "main.h"
/**
 * print_most_numbers - prints number 0 to 9, except 4 and 2
 * Return: numbers between 0 and 9, excluding 2 and 4
 */
void print_most_numbers(void)
{	int k = 0;

	for (; k <=9; k++)
	{
	if (k == 4 || k == 2)
	{
	continue;
	}
	else
	{
	_putchar(k + '0');
	}
	}
	_putchar("\n");
}
