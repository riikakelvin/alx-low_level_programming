#include "main.h"
/**
 * _pow_recursion - displays x exponent y
 * @x: base value
 * @n: the exponent (power)
 * Return: the result or computation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
