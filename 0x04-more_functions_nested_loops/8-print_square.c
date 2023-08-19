#include "main.h"

/**
 * print_square - prints a square
 * @size: Size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, m;

		for (b = 0; b < size; b++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
