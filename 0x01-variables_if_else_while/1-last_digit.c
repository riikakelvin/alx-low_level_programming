#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Start of the program
* Description: program that prints if numbers are positive negative values
* Return: 0 is always a success
*/

int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;

	if (k > 5)
	{printf("last digit %d is %d and is greater than 5", n, k);
	}
	else if (k == 0)
	{printf("last digit of %d is %d and is 0", n, k);
	}
	else if
	(k < 6 && m != 0);
	{printf("last digit of %d is %d and is less than 6 and not 0", n, k);

	printf("\n");
	return (0);
}
