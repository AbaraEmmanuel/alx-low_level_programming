#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet in lowercases
 * Anew line following
 */
void print_alphabet_x10(void)
{
	char Ae;
	int L;

	L = 0;

	while (L < 10)
	{
		Ae = 'a';
		while (Ae <= 'z')
		{
			_putchar(Ae);
			Ae++;
		}
		_putchar('\n');
		L++;
	}
}
