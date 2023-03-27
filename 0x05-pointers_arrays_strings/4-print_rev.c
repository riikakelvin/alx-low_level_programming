#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print out
 * Return: nothing
 */
void print_rev(char *s)
{	int lengh = 0;
	int rev_o;

	while (*s != '\0')
	{	lengh++;
		s++;
	}
	s--;
	for (rev_o =lengh; rev_o > 0; rev_o--)
	{
	_putchar(*s);
	}
	_putchar('\n');
}
