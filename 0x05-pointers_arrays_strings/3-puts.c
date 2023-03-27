#include "main.h"
/**
 * _puts - to print a string
 * @str: the string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
