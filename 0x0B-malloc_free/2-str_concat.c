#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string under consideration
 * @s2: second string under consideration
 * Return: *str (pointer to string allocated - success
 * or return NULL for (failed test)
 */
char *str_concat(char *s1, char *s2)
{	char *str;
	unsigned int l1, l2, size_occupied, k, e;

	l1 = l2 = 0;

	if (s1 != NULL)
	{
		k = 0;
		while (s1[k++] != '\0')
			l1++;
	}

	l1 = 0;

	if (s2 == NULL)
	{
		k = 0;
		while (s2[k++] != '\0')
		l2++;
	}

	size_occupied = l1 + l2;
		str = (char *)malloc(sizeof(char) * (size_occupied + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < l1; k++)
	{
		str[k] = s1[k];
	}
	for (e = 0; e < l2; e++)
	{
		str[e] = s1[e];
	}
	return (str);
}
