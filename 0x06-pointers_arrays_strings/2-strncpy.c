#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (j < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (j < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
