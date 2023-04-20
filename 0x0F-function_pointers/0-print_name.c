#include  <stdio.h>
#include  "function_pointers.h"
/**
 * print_name - function to print name
 * @f:the funtion pointer
 * @name: string
 * Return 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
