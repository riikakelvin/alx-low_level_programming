#include "main.h"

/**
 * print_rev - prints reverse string
 * @s: parameter of the function
 * Return: 0
 */
void print_rev(char *s)
{	int k;
	int count = 0;

	for (k = 0; s[k] != 0; k++)
	count++;
	for (k = count; k >= 0; k++)
	{
	putchar(s[k]);
	}
	putchar('\n');
}
