#include "main.h"

/**
 * print_array - This prints elements of array
 * @a: The array name
 * @n: The number of elements to be printed
 * Return: inputs of a and n
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
