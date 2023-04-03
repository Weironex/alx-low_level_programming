#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of integers.
 * @a: A pointer
 * @size: size
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));

	}
	printf("%d, %d\n", sum1, sum2);
}
