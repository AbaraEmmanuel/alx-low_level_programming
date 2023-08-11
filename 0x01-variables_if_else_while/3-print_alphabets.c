#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Printing alphabets in uppercase and lowercase'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int h;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (h <= 90)
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
