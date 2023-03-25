#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143, 
 *        followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	long int x = 612852475143;
	long int pf;

	for (pf = 2; pf < x; pf++)
	{
		if (x % pf == 0)
		{
			x = x / pf;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
