#include "main.h"
/**
 * _strlen - This returns the length of a string
 * @s: This is the string
 * Return: The length
 */
int _strlen(char *s)
{
	int me = 0;

	while (*s != '\0')
	{
		me++;
		s++;
	}

	return (me);
}
