#include <stdio.h>
/**
 * main - The main function
 * @k: variables in play
 * @sum: variable
 * Return : 0 success
 */
int main(void)
{	int k;
	int sum;

	sum = 0;

	for (k = 0; k < 10; k++)
	{
		if ((k % 3 == 0) || (k % 5 == 0))
		{
			sum = sum + k;
		}
	}
	printf("%d\n", sum);
	return (0);
}

