#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Alloctae memory using malloc.
 * @b: The number of bytes allocated
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return (ptr);
}
