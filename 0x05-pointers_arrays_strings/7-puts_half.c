#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Function parameter
 *
 * Return: Always 0
 */

void puts_half(char *str)
{

	int i;
	int n = 0;

	for (i = 0; str[i] != '\0'; i++)
		n++;

	if (length % 2 == 0)
	{
		for (i = n / 2; str[i] != '\0'; i++)
			_putchar(str[i]);

		_putchar('\n');
	}

	else if (n % 2 != 0)
	{
		for (i = (n - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n')
}
