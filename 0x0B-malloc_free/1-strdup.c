#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup -  returns a pointer to a newly allocated memory space
 * @str: the character under consideration
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{	char *kev;
	unsigned int k, e;

	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	kev = malloc(sizeof(char) * (k + 1));
	if (kev == NULL)
	{
		return (NULL);
	}

	for (e = 0; e < k; e++)
	{
		kev[e] = str[e];
	}
	kev[k] = '\0';
	return (kev);
}
