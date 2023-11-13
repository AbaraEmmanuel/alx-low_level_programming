#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: s1[b] - s2[b]
 */
int _strcmp(char *s1, char *s2)
{
	int b;

	b = 0;
	while (s1[b] != '\0' && s2[b] != '\0')
	{
		if (s1[b] != s2[b])
		{
			return (s1[b] - s2[b]);
		}
		b++;
	}
	return (0);
}
