#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be saerched
 * @accept: Parameter function
 *
 * Return: The number of bytes in the initial segment of @s
 *		which consist only of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		c++;
		s++;
	}
	return (c);
}
