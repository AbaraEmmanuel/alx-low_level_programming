#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int q, w, e;

	if (n >= 0 && n <= 15)
	{
		for (q = 0; q <= n; q++)
		{
			for (w = 0; w <= n; w++)
			{
				e = w * q;
				if (w == 0)
				{
					_putchar(e + '0');
				} else if (e < 10 && w != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(e + '0');
				} else if (e >= 10 && e < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((e / 10) + '0');
					_putchar((e % 10)'0');
				} else if (e >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((e / 100) + '0');
					_putchar(((e % 10) % 10) + '0');
					_putchar((e % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
