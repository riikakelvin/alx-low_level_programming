#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *Return: ...
 */
void jack_bauer(void)
{
int k, e, l, v;
for (k = 0; k <= 2; k++)
{
for (e = 0; e <= 9; e++)
if ((k <= 1 && e <=9) || (k <=2 && e <= 3))
{
for (l = 0; l <= 5; l++)
{
for (v = 0; v <= 9; v++)
{
_putchar(k + '0');
_putchar(e + '0');
_putchar(58);
_putchar(l + '0');
_putchar(v + '0');
_putchar('\n');
}
}
}
}
}
