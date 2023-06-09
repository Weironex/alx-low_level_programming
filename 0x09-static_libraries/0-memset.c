#include "main.h"

/**
 * _memset - Fills the first @n bytes of the memory area pointed to by @s
 *		with the constant byte @b.
 * @s: A pointer to the menory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
