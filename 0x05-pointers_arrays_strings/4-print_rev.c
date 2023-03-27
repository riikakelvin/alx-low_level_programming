#include "main.h"
/**
 * print_rev - prints as string in reverse
 * @s - string under consideration
 * Return: 0
 */
void print_rev(char *s)
{	int lengh = 0;
	int rev_0;

	while (*s != '\0')
	{
		lengh++;
		s++;
	}
	s--
	for (rev_0 = lengh; rev_0 > 0; rev_0--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
