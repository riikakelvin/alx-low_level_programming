#include <stdio.h>
/**
 * main - main function
 * Description:  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{	int k = 0;

	long int j = 0, k = 1, onwards;

	while (k  < 50)
	{
		onwards =  j + k;
		j = k;
		k = onwardsi;
		printf("%lu\n", onwards);
		if (k < 49)
		{
		printf(",");
		}
		k++;
	}
	putchar('\n');
	return (0);
}
