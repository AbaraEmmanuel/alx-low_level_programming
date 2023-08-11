#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Description: 'Fetch the last digit of a number'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int B;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	B = n % 10;
	if (B > 5)
	{
		printf(""Last digit of %d is %d and is greater than 5\n", n, B);
	}
	else if(B == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, B);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, B);
	}
	return (0);
}
