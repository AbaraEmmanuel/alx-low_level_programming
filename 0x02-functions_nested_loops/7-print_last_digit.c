#include "main.h"

/**
 * print_last_digit - printing the last digit of a numberf
 * @n: the int i am extracting the last digit from
 * Return: value of our last digit
 */
int print_last_digit(int n)
{
	int g;

	if (n < 0)
	n = -n;

	g = n % 10;

	if (g < 0)
		g = -g;
	_putchar(g + '0');
	return (g);
}
