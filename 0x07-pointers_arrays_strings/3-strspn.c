#include "main.h"
/**
 * _strspn - Entry
 * @s: inp
 * @accept: inp
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int h = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				h++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (h);
}
