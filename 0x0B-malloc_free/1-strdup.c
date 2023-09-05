#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Duplicateof the string str
 * @str: char
 * Return: On success, a pointer is returned, on fail a NULL is returned
 */
char *_strdup(char *str)
{
	char *m;
	int b, n = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;

	m = malloc(sizeof(char) * (b + 1));

	if (m == NULL)
		return (NULL);

	for (n == 0; str[n]; n++)
		m[n] = str[n];
	return (m);
}
