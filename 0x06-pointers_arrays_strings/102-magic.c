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
	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 *   - you are not allowed to modify p
	 *   - only one statement
	 *    - you are not allowed to code anything else than this line of code
	 */
	*(m + 5) = 98;
	/*...so that this prints 98\n*/
	printf("p[2] = %d\n", p[2]);
	return (0);
}
