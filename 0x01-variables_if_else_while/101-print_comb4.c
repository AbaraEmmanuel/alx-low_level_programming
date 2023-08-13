#include <time.h>
/**
 * main - 'Entry'
 * Return: Always 0
 */
int main(void)
{
	int b, n, m;
	for (b = '0'; b < '9'; b++)
	{
	for (n = b + 1; n <= '9'; n++)
	{
	for (m = n + 1; m <= '9'; m++)
	{
	if ((n != b) != m)
	{
	putchar(b);
	putchar(n);
	putchar(m);
	if (b == '7' && n == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

