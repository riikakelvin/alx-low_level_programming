#include <stdio.h>
/**
 * _putchar - prints the character cto standard output
 * c: chracter to-be printed out
 * Return: 0 (success)
 * Return: -1 (error)
 */
int _putchar(char c)
{return(write(1, &c, 1));
}
