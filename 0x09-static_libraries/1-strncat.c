#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *		an inputted number of bytes from src.
 * @dest: Destination string.
 * @src: The source string.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destlen = 0;

	while (dest[i++])
		destlen++;

	for (i = 0; src[i] && i < n; i++)
		dest[destlen++] = src[i];

	return (dest);
}
