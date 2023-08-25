#include "main.h"
/**
 * _strcmp - This compares string val
 * @s1: input
 * @s2: input
 *
 * Return: s1[n] - s2[n]
 */
ont _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
