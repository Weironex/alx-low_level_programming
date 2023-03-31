#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @s: The string.
 *
 * Return: A pointer to the string.
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[j] == s[i])
				s[i] = b[j];
		}
	}
}
