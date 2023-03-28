#include "main.h"
/**
 * puts2 - prints all string characters
 * @str: parameter used
 * Return: 0 always
 */
void puts2(char *str)
{	int k;
	for (k = 0; str[k] != '\0'; k++)
	{
		putchar(str[k]);
		k++;
	}
	putchar('\n');
}
