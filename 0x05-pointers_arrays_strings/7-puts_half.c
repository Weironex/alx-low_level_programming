#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Function parameter
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;
	int x;

	while (str[i++])
		n++;

	if (n % 2 == 0)
		x = n / 2;

	else
		x = (n + 1) / 2;

	for (i = x; i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
