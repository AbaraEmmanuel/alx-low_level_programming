#include "main.h"
/**
 * _strncat - This joins two strings too
 * @dest: An input value
 * @src: An input value
 * @n: Input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int m;

	b = 0;
	while (dest[b] != '\0')
	{
		i++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[b] = src[m];
		b++;
		m++;
	}
	dest[b] = '\0';
	return (dest);
}
