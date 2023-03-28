#include "main.h"

/**
 * puts2   -	Prints every other character of a string,
 *		starting with the first character, followed by a new line.
 * @str: Function parameter.
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}