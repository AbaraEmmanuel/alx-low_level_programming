#include "main.h"
/**
 * reverse_array - Reverses array of ints
 * @a: array
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int m;

	for (b = 0; b < n--; b++)
	{
		m = a[b];
		a[b] = a[n];
		a[n] = m;
	}
}
