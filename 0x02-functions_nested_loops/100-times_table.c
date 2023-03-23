#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n : function parameter.
 *
 * Return:void
 */

void print_times_table(int n)

{
	int i;
	int j;
	int prod;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * j;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar('0' + prod / 10);
				}
				_putchar('0' + prod % 10);
			}
			_putchar('\n');
		}
	}
}
