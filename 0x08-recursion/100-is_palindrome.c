#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - size.
 * @s: String
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p - palindrome
 * @s: String
 * @l: Parameter function
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int p(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (p(s + 1, l - 2));
	}

	return (0);
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: String
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p(s, len - 1));
}
