#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, m;

		for (b = 1; b <= size; b++)
		{
			for (m = b; m < size; m++)
			{
				_putchar(' ');
			}

			for (m = 1; m <= b; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
