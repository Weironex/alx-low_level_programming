#include "main.h"

/**
 * _memcpy - Copies @n bytes from memory area @src to memory area @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	char *p_src = src;

	while (n-- > 0)
	{
		*p_dest++ = *p_src++;
	}
	return (dest);
}
