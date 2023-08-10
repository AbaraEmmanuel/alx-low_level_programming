#include <stdio.h>

/**
 * main - to print the size of data types
 *
 * Return: Always (0)
 *
 */

int main(void)
{
	char F;
	int G;
	long int H;
	long long int J;
	float K;

	printf("Size of a char: %lu byte(s)\n", sizeof(F));
	printf("Size of an int: %lu byte(s)\n", sizeof(G));
	printf("Size of a long int: %lu byte(s)\n", sizeof(H));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(J));
	printf("Size of a float: %lu byte(s)\n", sizeof(K));
	return (0);
}
