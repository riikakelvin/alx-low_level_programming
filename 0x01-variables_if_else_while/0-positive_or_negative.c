#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/** main - program that prints if numbers are positive negative values
 * Return: (0) is always a success
 *
 */

int main(void)
{	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{printf("%d is positive\n", n);
	}
	else if (n == 0)
	{printf("%d is zero\n", n);
	}
	else
	{"$d is negative\n", n);
	}
	return (0);
}
