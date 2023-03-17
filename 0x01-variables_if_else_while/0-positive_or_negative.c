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
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{printf("%d is positive", n);
	}
	else if (n == 0)
	{printf("%d is 0", n);
	}
	else
	{printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}
