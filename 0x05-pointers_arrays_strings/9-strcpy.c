#include "main.h"
#include <stddef.h>

/**
 * _strcpy  -	Copies the string pointed to by src,
 *		including the terminating null byte (\0),
 *		to the buffer pointed to by dest.
 * @dest: destination array
 * @src: source array
 *
 * Return: Copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return NULL;
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
