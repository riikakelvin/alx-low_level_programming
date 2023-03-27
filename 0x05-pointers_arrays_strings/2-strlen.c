#include "main.h"
/**
 * _strlen - display lengh of string
 * @s: string under consideration
 * Return: the lengh of string
 */
int _strlen(char *s)
{	int lengh = 0;
	while (s != '0')
	{	lengh++;
		s++;
	}
	Return (lengh);
}
