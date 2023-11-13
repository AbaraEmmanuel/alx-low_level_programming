#include "main.h"
/**
 *  _memset - fill a block of memory
 *  @s: starting address of memory
 *  @b: the desired value
 *  @n: number of bytes to be changed
 *  Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (; n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
