#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square
 *			matrix of integers.
 * @a: A pointer
 * @size: size
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("Diagonal 1 sum = %d\n", sun1);
	printf("Diagonal 2 sum = %d\n", sum2);
}
