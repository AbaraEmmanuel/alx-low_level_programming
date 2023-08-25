#include "main.h"
#include <stdio.h>

/**
 * rot13 - rot 13
 * @s: points to string
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int b;
	int m;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; s[b] != '\0'; b++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[b] == data1[m])
			{
				s[b] = datarot[m];
				break;
			}
		}
	}
	return (s);
}
