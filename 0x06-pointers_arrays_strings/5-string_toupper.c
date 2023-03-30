#include "main.h"
/**
 * string_toupper - changes lower case to uppercase
 * @str: string awaiting conversion
 * Return: string
 */
char *string_toupper(char *str)
{
	int k;

	k = 0;

	while (str[k] != '0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
		str[k] = str[k] - 32;
		k++;
	}
	return (str);
}
