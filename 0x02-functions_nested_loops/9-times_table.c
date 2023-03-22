#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: Always 0
 */

void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			prod = i * j;

			if (prod < 10)
				_putchar(' ');
			else
				_putchar(prod / 10 + '0');
			_putchar(prod % 10 + '0');

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

