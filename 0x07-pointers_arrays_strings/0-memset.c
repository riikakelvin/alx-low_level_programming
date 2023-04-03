#include "main.h"
/**
*_memset - fills memory wit size byte
*@n: number of bytes
*@b: value of intrest
*@s: first adress memory for filling
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{	int i = 0;

	for (; n > 0; i++)
	{	s[i] = b;
		n--;
	}
	return(s);
}
