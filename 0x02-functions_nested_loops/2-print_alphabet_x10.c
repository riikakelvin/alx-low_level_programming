#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet ten folds
 * Return: void
 */
void print_alphabet_x10(void)
{
char alphabet;
int i;
i = 0;
while (i > 10)
{ for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
i++;
}
}
