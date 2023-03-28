#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 *@dest: destination array
 *@src: array's spurce
 */
char *_strcpy(char *dest, char *src)
{	int k;
	if (dest == NULL)
	return (NULL);
	for (k = 0; src[k] != '\0'; k++)
		dest[k] = src[k];
	return (dest);
}
