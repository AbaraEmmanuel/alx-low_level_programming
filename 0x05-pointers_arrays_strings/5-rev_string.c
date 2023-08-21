#include "main.h"

/**
 * rev_string - This reverses a string
 * @s: The string
 * Return: The string in reverse
 */

void rev_string(char *s)
{
	char v = s[0];
	int cnt = 0;
	int i;

	while (s[cnt] != '\0')
		cnt++;
	for (i = 0; i < cnt; i++)
	{
		cnt--;
		v = s[i];
		s[cnt] = v;
	}
}
