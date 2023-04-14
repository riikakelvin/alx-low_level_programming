#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	l1 = 0;
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	size_occupied = l1 + l2;
		str = malloc((sizeof(char) * (size_occupied) + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (k < l1)
	{
		str[k] = s1[k];
		k++;
	}
	e = 0;
	while (k <= size_occupied)
	{
		str[k] = s2[e];
		k++;
		e++;
	}
	return (*str);
}
