#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	int n = 0;
	int i = 0;
	char tmp;

	while (s[i++])
		n++;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i  - 1] = tmp;
	}
}
