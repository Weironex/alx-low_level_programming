#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 1 ; j < 100 ; j++)
		{
			if (i < j)
			{
				putchar(i + '0' / 10);
				putchar(i + '0' % 10);
				putchar(' ');
				putchar(i + '0' / 10);
				putchar(i + '0' % 10);
				if (i != 98 && j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
