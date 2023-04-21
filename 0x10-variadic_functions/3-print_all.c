#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Print a character from variadic arguments
 * @args: The list of arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Print an integer from variadic arguments
 * @args: The list of arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float from variadic arguments
 * @args: The list of arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string from variadic arguments
 * @args: The list of arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Print anything from variadic arguments
 * @format: The format string
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0, j = 0;
	const char *fmt_spec = "cifs";

	/* Define a function pointer table to map format specifiers to print functions */
	void (*print_funcs[])(va_list) = {print_char, print_int, print_float, print_string};

	va_start(args, format);

	/* Iterate over the format string and print each corresponding argument */
	while (format && format[i])
	{
		j = 0;
		while (fmt_spec[j])
		{
			if (format[i] == fmt_spec[j])
			{
				printf("%s", sep);
				print_funcs[j](args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
