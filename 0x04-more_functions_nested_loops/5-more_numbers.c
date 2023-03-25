#include "main.h"
/**
 * more_numbers - prints the numbers 0 to 14, 10 folds
 * @a: the numbers under consideration
 * @b: the number of times of repeat printing
 * Return: the numbers between 0 and 14 ten times
 */
void more_numbers(void)
{	int a, b;
	for (a = 0; a < 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 9)
	{
	_putchar((b / 10) + '0');
	{
	_putchar((b % 10) + '0');
	{
	_putchar('\n');
	}
	}
	}
	}
	}
}
