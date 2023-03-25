#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		x = -n
		_putchar('-');
	}

	if (x / 10)
		print_number(x / 10);
	
	_putchar('0' + x % 10);
}
