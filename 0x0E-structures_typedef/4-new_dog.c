#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length
 * @s: string to eval
 * Return: the lenght
 */
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}
