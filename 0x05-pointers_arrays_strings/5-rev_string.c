#include "main.h"

/**
 * rev_string - This reverses a string
 * @s: The string
 * Return: The string in reverse
 */

void rev_string(char *s)
{
	char rev;
	int cnt = strlen(s);
	int i, j;

	for (i = 0; i = cnt - 1; i < j; i++, j--)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}
