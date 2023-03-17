#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - Start of the program*/
/*Description: program that prints if numbers are positive negative values*/
/* Return: is always a success*/

int main(void)
{
	int n, lastd;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastd = n % 10;

	if (lastd > 5)
	{printf("last digit of %d is %d and is greater than 5\n", n);
	}
	else if (lastd == 0)
	{printf("last digit of %d is %d and is 0\n", n);
	}
	else if (lastd < 6 && lastd != 0)
	{"last digit %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}

