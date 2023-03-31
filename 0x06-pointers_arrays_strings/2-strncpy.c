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
	v = 0;
	while (v < n && src[v] != '\0')
	{
		dest[v] - src[v];
		v++;
	}
	while (v < n)
	{
		dest[v] != '\0';
		v++;
	}
	return (dest);
}
