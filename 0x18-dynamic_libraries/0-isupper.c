#include "main.h"

/**
 * _isupper - letters in uppercase
 * @c: char to check
 *
 * Return: Always 1 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
