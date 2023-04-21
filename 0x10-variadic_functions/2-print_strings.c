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

		if (!str)
		{
		printf("nil");
		}
		if (!separator)
		{
		printf("%s", str);
		}
		else if (separator && ind == 0)
		{
		printf("%s", str);
		}
		else
		{
		printf("%s%s", separator, str);
		}
		va_end(strings);
	}
		printf("\n");
}
