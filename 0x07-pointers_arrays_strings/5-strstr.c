#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring @needle in the string
 *		@haystack. The terminating null bytes (\0) are not compared.
 * @needle: The substring to be located.
 * @haystack: The string to be searched.
 *
 * Return: A pointer to the beginning of the located substring,
 *		or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++
	}
	return (0);
}
