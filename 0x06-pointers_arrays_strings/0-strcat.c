#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destlen = 0;

	while (dest[i++])
		destlen++;

	for (i = 0; src[i]; i++)
		dest[destlen++] = src[i];

	return (dest);
}
