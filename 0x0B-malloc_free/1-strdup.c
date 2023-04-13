#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 *		contains a copy of the string given as a parameter.
 * @str: The string.
 *
 * Return: A pointer to the duplicated string.
 *		NULL, if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
