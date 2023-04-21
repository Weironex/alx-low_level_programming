#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: format string that specifies the types of the arguments
 *
 * The format string can contain the following specifiers:
 *   - 'c' for char
 *   - 'i' for int
 *   - 'f' for float
 *   - 's' for char *
 *
 * If a string argument is NULL, "(nil)" is printed instead.
 * If the format string is NULL, nothing is printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sval;
	int ival;
	double dval;
	char cval;
	int i = 0, j = 0;
	char *separator = "";

	struct fmt_type
	{
		char type;
		void (*func)(va_list args);
	};

	struct fmt_type fmt[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (fmt[j].type)
		{
			if (fmt[j].type == format[i])
			{
				printf("%s", separator);
				fmt[j].func(args);
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
 * print_char - prints a char
 * @args: va_list of arguments
 */
void print_char(va_list args)
{
	char cval = va_arg(args, int);

	printf("%c", cval);
}

/**
 * print_int - prints an int
 * @args: va_list of arguments
 */
void print_int(va_list args)
{
	int ival = va_arg(args, int);

	printf("%d", ival);
}

/**
 * print_float - prints a float
 * @args: va_list of arguments
 */
void print_float(va_list args)
{
	double dval = va_arg(args, double);

	printf("%f", dval);
}

/**
 * print_string - prints a string
 * @args: va_list of arguments
 */
void print_string(va_list args)
{
	char *sval = va_arg(args, char *);

	if (sval)
		printf("%s", sval);
	else
		printf("(nil)");
}
