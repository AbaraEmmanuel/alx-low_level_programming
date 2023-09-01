#include "main.h"

/**
 * char *_strcpy - copies the str pointed to by src
 * @dest: Copy to
 * @src: Copy from
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;
	int n = 0;

	while (*(src + b) != '\0')
	{
		b++;
	}
	for ( ; n < b; n++)
	{
		dest[n] = src[n];
	}
	dest[b] = '\n';
	return (dest);
}
