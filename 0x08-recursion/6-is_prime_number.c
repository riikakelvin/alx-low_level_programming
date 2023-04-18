#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - distinguisges prime numbers
 * @n: number
 * Return: confirmation
 */
int is_prime_number(int n)
{
	return (verify_prime_number(n, 1));
}

/**
 * verify_prime_number - checks for prime numbers
 * @k: another number
 * @n: number
 * Return: a prime number, verified
 */
int verify_prime_number(int k, int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % k == 0 && k > 1)
	{
		return (0);
	}
	if ((n / k) < k)
	{
		return (1);
	}
		return (verify_prime_number(n, k + 1));
	
}
