#include "main.h"
/**
 * _strchr - character locator in a string
 * @c :characters
 * @s: string under consideration
 * Return: 0
 */
char *_strchr(char *s, char c)
{	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
		return (&s[k]);
	}
	return (0);
}
