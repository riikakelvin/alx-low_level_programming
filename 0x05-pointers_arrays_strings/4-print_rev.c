#include "main.h"
/**
 * print_rev - prints as string in reverse
 * @s - string under consideratiion
 * Return: 0
 */
void print_rev(char *s)
{	int lengh = 0;
	int o;

	while (*s != '\0')
	{
		lengh++;
		s++;
	}
	s--;
	for (o = lengh; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
