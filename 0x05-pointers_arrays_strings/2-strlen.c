#include "main.h"
/**
 * _strlen - display lengh of string
 * @s: string under consideration
 * Return: lengh
 */
int _strlen(char *s)
{	int longi = 0;
	while (*s != \'0')
	{	longi++;
		s++;
	}
	Return(longi);
}
