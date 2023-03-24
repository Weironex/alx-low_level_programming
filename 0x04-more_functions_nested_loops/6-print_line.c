#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ to be printed.
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
