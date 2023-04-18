#include "main.h"
/**
 * _sqrt_recursion - displays square root of a number
 * @n : parameter
 * Return: actual square root of n
 */
int _sqrt_recursion(int n)
{
	{
		return (_sqrt_recursion(n, 1));
	}
/*
 * _sqrt_recursion - displays square root of a number
 * @n: parameter
 * @k: test number (integer value)
 * Return: result of the square root
 */
int _sqrt_recursion(int k, int n)
{
	int square = (k * k);

	if (square > n)
	{
		return (-1);
	}
	if (square == n)
	{
		return (k);
	}
	return (_sqrt_recursion(n,k + 1));
}
}
