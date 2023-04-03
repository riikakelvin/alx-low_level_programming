#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: number of bytes in first segment
 * @accept: source of bytes
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{	unsigned int n, k, value_init, value_cur;

	value_init = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		value_cur = 0;
		
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[k])
			{
				value_init++;
				value_cur = 1;
			}
		}
	}
	return (0);
}
