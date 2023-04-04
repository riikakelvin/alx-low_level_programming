#include "main.h"
/**
 * print_chessboard - function that prints chessboard
 * @a: pointer to the array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{	int k, e;

	for (k = 0; k < 8; k++)
	{
		for  (e = 0; e < 8; e++)
		{
			_putchar(a[k][e]);
		}
		_putchar('\n');
	}
}
