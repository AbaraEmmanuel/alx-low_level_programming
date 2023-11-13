#include "main.h"
/**
 * _strpbrk - Entry
 * @s: inp
 * @accept: inp
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
				return (s);
		}
		s++;
	}
	return ('\0');
}
