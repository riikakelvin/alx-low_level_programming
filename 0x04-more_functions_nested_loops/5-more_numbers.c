#include "main.h"
/**
 * more_numbers - prints the numbers 0 to 14, 10 folds
 * @v: the numbers under consideration
 * @k: the number of times of repeat printing
 * Return: the numbers between 0 and 14 ten times
 */
void more_numbers(void)
{	int k, v;
	
	for(k = 0; k < 10; k++)
	{
	for(v = 0; v <= 14; v++)
	{
	if(v > 0)
	{
	_putchar((v/ 10) + '0');
	{
	_putchar((v% 10) + '0');
	{
	_putchar('\n');
	}
	}
	}
	}
	}
}
