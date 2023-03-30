#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 *@str: string to be encoded
 *Return: string
 */
char *leet(char *)
{	int k;
	int e;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (k = 0; str[k] != '\0' ; k++)
	{
	for (e = 0; a[e] != '\0' ; e++)
	{
	if (str[k] == a[e])
	str[k] = b[e];
	}
	}
	return (str);
}
