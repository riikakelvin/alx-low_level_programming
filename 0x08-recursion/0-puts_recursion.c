#include "main.h"
/**
 * _puts_recursion - prints string then new line
 * @s: string input
 * Return: 0 successful
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(1 + s);
	}
	else
	{
		_putchar('\n');
	}
}
