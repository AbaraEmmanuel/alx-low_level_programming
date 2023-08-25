#include "main.h"
/**
 * leet - hgvdajha
 * @n: val
 * Return: n val
 */
char *leet(char *n)
{
	int b, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; n[m] != '\0'; b++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[b] == s1[m])
			{
				n[b] = s2[m];
			}
		}
	}
	return (n);
}
