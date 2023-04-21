#include "variadic_functions.h"
/**
 * print_strings - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = (va_arg(list, char *));
		{
			if (!string)
			{
				string = "nil";
			}
			if (!separator)
			{
				printf("%s", string);
			}
			else if (separator && i == 0)
			{
				printf("%s", string);
			}
			else
				printf("%s%s", separator, string);
			printf("\n");
		}
	}
}
