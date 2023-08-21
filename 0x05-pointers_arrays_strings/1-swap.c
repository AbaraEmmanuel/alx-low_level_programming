#include "main.h"
/**
 * swap_int - This swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 */
void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
