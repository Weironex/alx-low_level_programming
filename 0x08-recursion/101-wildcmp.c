#include "main.h"

/**
<<<<<<< HEAD
 * wildcmp - Compares two strings and returns 1 if the strings can be 
=======
 * wildcmp - Compares two strings and returns 1 if the strings can be
>>>>>>> 4085e9c77a50a0d1c32cc8fa2d0e31d6ab031e94
 *		considered identical, otherwise return 0.
 * @s1: Parameter function
 * @s2: Parameter function
 *
 * Return: Always 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
