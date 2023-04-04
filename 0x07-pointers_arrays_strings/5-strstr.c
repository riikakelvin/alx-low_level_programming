#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: substring input
 * @needle: string input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	
		char *k = haystack;
		char *e = needle;
	{
		while (*k == *e && *e != '\0')
		{
			*k++;
			*e++;
		}
		if (*e == '\0')
			return (haystack);
	}
	return (0);
}
