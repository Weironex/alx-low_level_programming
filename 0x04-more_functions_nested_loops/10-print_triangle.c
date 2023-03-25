#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: Parameter to be checked.
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - j; j > 0; j--)
				_putchar(' ');

			for (j = 0; j < i; j++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

