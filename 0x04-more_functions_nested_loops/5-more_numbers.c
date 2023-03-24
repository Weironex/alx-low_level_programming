#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 *				followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, c;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
