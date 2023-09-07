#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: number of byte
 * Return: a pointer to the allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
