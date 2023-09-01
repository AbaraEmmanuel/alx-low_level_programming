#include "main.h"
/**
 * _memcpy - a function
 * @dest: stored memory
 * @src: copied memory
 * @n: numberof bytes
 * Return: copied ,e,ory withn byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int k = n;

	for (; b < k; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}
