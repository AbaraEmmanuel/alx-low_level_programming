#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length
 * @s: string to eval
 * Return: the lenght
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
