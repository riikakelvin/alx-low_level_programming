#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *Return:no output
 */
void times_table(void)
{
	int k, e, v, i, n;

	for (k = 0; k <= 9; k++)
	{
	for (e = 0; e <= 9; e++)
	{
	v = k * e;
	if (v > 9)
	{
	i = v % 10;
	n = (v - i) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(n + '0');
	_putchar(v + '0');
	}
	else
	{
	if (e != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(v + '0');
	}
	}
	_putchar('\n');
	}
}

