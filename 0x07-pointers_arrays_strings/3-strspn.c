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
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}
