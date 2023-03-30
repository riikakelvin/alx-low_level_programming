#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes strings using rot 13
 * @s: pointer to string parameter
 * Return: string pointer
 */
char *rot13(char *s)
{	int j;
	int k;

	char datain1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < 52; k++)
		{
			if (s[j] == datain1[k])
			{
				s[j] = datarot13[k];
				break;
			}
		}
	}
	return (s);
}

