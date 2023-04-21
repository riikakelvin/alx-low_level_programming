#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ind;
	char *str;

	va_list strings;

	va_start(strings, n);

	for (ind = 0; ind < n; ind++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
		{
		printf("nil");
		}
		else
		{
		printf("%s", str);
		}
		if (ind != (n - 1)  && separator != NULL)
		{
		printf("%s", separator);
		}
		{
		va_end(strings);
		printf("\n");
		}
	}
}
