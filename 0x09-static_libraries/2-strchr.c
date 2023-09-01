#include "main.h"
/**
 * _strchr - entry
 * @s: inp
 * @c: inp
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int b = 0;

	for (; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}
	return (0);
}
