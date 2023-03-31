#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: numbers of strings
 * Return: destination string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{	int v;
	for (v = 0; v < n; v++)
	{
		dest[v] = src[v];
	}
	return (dest);
}
