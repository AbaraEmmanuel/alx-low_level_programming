#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets in rev'
 * Return: Always 0
 */
int main(void)
{
	int n = 122;

	for (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
