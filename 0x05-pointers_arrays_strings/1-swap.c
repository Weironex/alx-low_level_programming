#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: 1st Pointer
 * @b: 2nd pointer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)

{

	*a += *b;

	*b = *a - *b;

	*a = *a - *b;

}
