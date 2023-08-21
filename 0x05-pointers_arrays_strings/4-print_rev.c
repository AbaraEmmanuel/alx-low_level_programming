#include "main.h"
/**
 * print_rev - printing in reverse
 * @s: the string
 * return: 0
 */
void print_rev(char *s)
{
	int me = 0;
	int h;

	while (*s != '\0')
	{
		me++;
		s++;
	}
	s--;
	for (h = me; h > 0; h--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
