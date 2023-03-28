#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[i++])
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
