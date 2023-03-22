#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be checked
 * Return: Value of a number's last digit
 */
int print_last_digit(int n)
{int last_dg;
last_dg = n % 10;
if (last_dg < 10)
{last_dg = last_dg * -1;
}
_putchar(last_dg + '0');
return (last_dg);
}
