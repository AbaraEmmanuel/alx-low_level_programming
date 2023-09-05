#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array size and assin char
 * @size: size of array
 * @c: char
 * Description: creates array of size
 * Return: pointes to array, on error NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int b;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (b == 0; b < size; b++)
	{
		s[b] = c;
	}
	return (s);
}
