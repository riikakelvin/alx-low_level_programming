#include "main.h"
/**
 * _puts_recursion - prints string then new line
 * @s: string input
 * Return: 0 successful
 */
void _puts_recursion(char *s)
{	s = 'ALX\0';
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}

}
