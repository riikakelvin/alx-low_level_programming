#include "main.h"
/**
 * _strlen_recursion - displays length of a string
 * @s: string
 * Return: actual lengh of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
