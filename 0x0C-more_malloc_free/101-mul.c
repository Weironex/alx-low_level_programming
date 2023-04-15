#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: Character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: String to measure.
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: String to convert.
 *
 * Return: Integer value of s.
 */

int _atoi(char *s)
{
	int n = 0;

	while (*s && _isdigit(*s))
		n = n * 10 + (*s++ - '0');

	return (n);
}

/**
 * print_error - Prints an error message and exits with status 98.
 */

void print_error(void)
{
	printf("Error\n");

	exit(98);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, j, carry, len1, len2, *result;

	if (argc != 3)
		print_error();

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

	for (i = 0; i < len1; i++)
	{
		if (!_isdigit(argv[1][i]))
			print_error();
	}
	for (i = 0; i < len2; i++)
	{
		if (!_isdigit(argv[2][i]))
			print_error();
	}
	result = calloc(len1 + len2, sizeof(*result));
	if (result == NULL)
		return (1);
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			carry += (argv[1][i] - '0') * (argv[2][j] - '0') + result[i + j + 1];
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] = carry;
	}
	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	for (; i < len1 + len2; i++)
		printf("%d", result[i]);
	printf("\n");
	free(result);
	return (0);
}
