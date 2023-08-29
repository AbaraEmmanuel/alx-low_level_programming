#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry
 * @a: inp
 * @size: inp
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int sum, sum1, b;

	sum = 0;
	sum1 = 0;

	for (b = 0; b < size; b++)
	{
		sum = sum +a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		sum1 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
