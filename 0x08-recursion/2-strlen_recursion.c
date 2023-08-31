#include "main.h"
/**
 * factorial - returns the factorial
 * @n: number to return
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		retuen (1);
	return (n * factorial(n - 1));
}
