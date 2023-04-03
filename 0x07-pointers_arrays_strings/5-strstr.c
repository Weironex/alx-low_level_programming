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
	char *p_haystack;
	char *p_needle;

	while (*haystack != '\0')
	{
		p_haystack = haystack;
		p_needle = needle;
		while (*p_needle != '\0' && *p_haystack == *p_needle)
		{
			p_haystack++;
			p_needle++;
		}
		if (*p_needle == '\0')
		{
			return (haystack);
		}
		haystack++
	}
	return (NULL);
}
