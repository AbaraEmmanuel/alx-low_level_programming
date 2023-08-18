#include "main.h"

/**
 * print_diagonal - Draw a horizontal line
 * @n: Number of time the character will print
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, m;

		for (b = 0; b < n; b++)
		{
			for (m = 0; m < n; m++)
			{
				if (m == b)
					_putchar('\\');
				else if (m < b)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
