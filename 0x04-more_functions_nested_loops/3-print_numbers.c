#include "main.h"
#include <stdio.h>
/** 
 * print_numbers - prints numbers between 0 and 9
 * @k: number under consideration
 * Return: 0 when succesful
 */
void print_numbers(void)
{	int k;

	for (k = 0; k <= 9; k++)
	{
	_putchar(k + '0');
	}
	_putchar('\n');
}
