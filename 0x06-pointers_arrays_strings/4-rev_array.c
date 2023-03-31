#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array
 * @n: The number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
