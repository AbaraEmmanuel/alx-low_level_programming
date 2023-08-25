#include "main.h"
/**
 * _strcmp - This compares string val
 * @s1: input
 * @s2: input
 *
 * Return: s1[i] - s2[i]
 */
ont _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
