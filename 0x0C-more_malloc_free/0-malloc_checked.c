#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Alloctae memory using malloc.
 * @b: The number of bytes allocated
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);

}
