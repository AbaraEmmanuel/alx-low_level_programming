#include "main.h"
/**
 * puts_half - prints half of a str
 * @str: input string
 * Return: Half of the input in s
 */
void puts_half(char *str)
{
	int b, n, m;

	m = 0;

	for (b = 0; str[b] != '\0'; b++)
		m++;
	n = (m / 2);

	if ((m % 2) == 1)
		n = ((m + 1) / 2);
	for (b = n; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
