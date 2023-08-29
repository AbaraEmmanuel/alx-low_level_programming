#include "main.h"
/**
 * print_chessboard - Entry
 * @a: array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int m;

	for (b = 0; b < 8; b++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[b][m]);
		_putchar('\n');
	}
}
