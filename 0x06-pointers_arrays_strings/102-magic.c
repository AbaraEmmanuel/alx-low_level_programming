#include <stdio.h>

/**
 * main - Starts to code
 * Return: main
 */

int main(void)
{
	int b;
	int p[5];
	int *m;

	p[2] = 1024;
	m = &b;
	*(m + 5) = 98;
	printf("p[2] = %d\n", p[2]);
	return (0);
}
