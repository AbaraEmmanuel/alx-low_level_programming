#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Always return 0
 */
int main(void)
{
	srand(time(NULL));
	int n = rand();
	printf("The number %d ", n);
	if (n > 0)
	{
		printf("is positive");
	} else if (n < 0)
	{
		printf("is negative");
	} else
	{
		printf("is zero");
	}
	printf("\n");
	return (0);
}
