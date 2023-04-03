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
	unsigned int count = 0;
	char *p_accept;

	while (*s != '\0')
	{
		p_accept = accept;
		while (*p_accept != '\0')
		{
			if (*s == *p_accep)
			{
				count++;
				break;
			}
			p_accept++;
		}
		if (*p_accept == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
