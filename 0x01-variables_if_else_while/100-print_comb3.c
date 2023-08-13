#include <stdio.h>
/**
 * main - 'Printing all possible combinations of two digits'
 * Return: Always 0
 */
int main(void)
{
	int n, j;

	for (n = 48; n <= 56; n++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > n)
			{
				putchar(n);
				putchar(j);
				if (n != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
