#include "main.h"
/**
 * _memcpy - function copies memory area
 * @dest: dstination of the copied memory
 * @src: source of the memory to be copied
 * @n: size of memory in bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{	int k = 0;
	int e = n;

	for (; k < e; k++)
	{	dest[k] = src[k];
		n--;
	}
	return (dest);
}
