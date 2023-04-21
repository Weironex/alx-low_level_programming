#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - Prints anything based on the format provided
 * @format: A string containing the format of the arguments
 *            c: char
 *            i: integer
 *            f: float
 *            s: char *
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";

	data_t data[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (data[j].type)
		{
			if (format[i] == data[j].type)
			{
				printf("%s", separator);
				data[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

/**
 * print_char - Prints a character
 * @args: A va_list containing the character to be printed
 *
 * Return: void
 */

void print_char(va_list args)
{
	char ch = va_arg(args, int);

	printf("%c", ch);
}

/**
 * print_integer - Prints an integer
 * @args: A va_list containing the integer to be printed
 *
 * Return: void
 */

void print_integer(va_list args)
{
	int num = va_arg(args, int);

	printf("%d", num);
}

/**
 * print_float - Prints a float
 * @args: A va_list containing the float to be printed
 *
 * Return: void
 */

void print_float(va_list args)
{
	float num = va_arg(args, double);

	printf("%f", num);
}

/**
 * print_string - Prints a string
 * @args: A va_list containing the string to be printed
 *
 * Return: void
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";

	printf("%s", str);
}
