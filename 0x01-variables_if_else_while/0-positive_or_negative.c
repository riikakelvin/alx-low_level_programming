#include <stdlib.h>
#include <time.h>
/* Main - Start point for the program */

/* Return: (0) indicates success */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{printf("%d is positive\n", n);
	}
	else if (n == 0)
	{ptintf("%d is positive\n", n);
	}
	else
	{printf(printf("%d is negative\n", n);
	return (0);
}
