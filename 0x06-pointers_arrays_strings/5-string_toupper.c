#include "main.h"
/**
 * string_toupper - changes lower case to uppercase
 * @str: string awaiting conversion
 * Return: string
 */
char *string_toupper(char *str)
{
	int k;

	for (k = 0; str[k] != '0'; k++)
	{
		if (str[k] >= 'a' && str[k] <= 'z')
		str[k] = str[k] - 32;
	}
	return (str);
}
