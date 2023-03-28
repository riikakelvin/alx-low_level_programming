#include "main.h"
/**
 * puts_half - prints half of a string
 *@str: parameter
 */
void puts_half(char *str)
{	int k;
	int lengh = 0;

	for (k = 0; str[k] != '\0'; k++)
		lengh++;
	if (lengh % 2 == 0)
	for (k = lengh / 2; str[k] != '\0'; k++)
	{
	putchar(str[k]);
	}
	else if (lengh % 2 != 0)
	for (k = (lengh - 1) / 2; str[k] != '\0'; k++)
	{
	putchar(str[k]);
	}
	putchar('\n');
}
