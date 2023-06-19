#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: substring input
 * @needle: string input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{	int l;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		l = 0;

		if (haystack[l] == needle[l])
		{
			do {
				if (needle[l - 1] == '\0')
					return (haystack);
				l++;
			}
		while (haystack[l] == needle[l]);
	}
		haystack++;
	}
	return (0);
}
