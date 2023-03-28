#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: Pointer for the string
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
