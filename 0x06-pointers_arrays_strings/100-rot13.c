#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string.
 *
 * Return: A pointer to the string.
 */

char *rot13(char *s)
{
	int i;
	int j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r[j];
				break;
			}
		}
	}
	return (s);
}
