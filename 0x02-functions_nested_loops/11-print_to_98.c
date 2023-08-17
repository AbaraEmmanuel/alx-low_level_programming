#include <stdio.h>

#include "main.h"


/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)

{
	int a, s;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", i);
		}
	}
	else if (n >= 98)
	{
		for (s = n; s >= 98; s--)
		{
			if (s != 98)
				printf("%d, ", s);
			else if (s == 98)
				printf("%d\n", s);
		}
	}
}
