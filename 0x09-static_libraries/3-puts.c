#include "main.h"

/**
 * _puts - prints the string
 * @str: the string to be printed
 */
void _puts(char *str)
{       int k;

        for (k = 0; str[k] != '\0'; k++)
        {
        _putchar(str[k]);
        }
        _putchar('\n');
}
