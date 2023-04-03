#include "main.h"
#include <stdio.h>
#include <string.h>

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
	int i;
	int j;

	for (i = 0; haystack[i]; i++)

	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needles[j])
			{
				break;
			}

		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}

	}
	return (NULL);
}
