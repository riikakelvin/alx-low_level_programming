#include <stdio.h>
/**
 * main - Starting point of thr program
 * Return: 0 (Successful test)
 */
int main(void)
	char k;
	int e;
	long int l;
	long long int v;
	float i;	
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(i));
	
	return (0);
}

