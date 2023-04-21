#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: format string containing types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i = 0;
	float f;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				break;
		}

		if (format[i + 1])
		{
			switch (format[i])
			{
				case 'c':
				case 'i':
				case 'f':
				case 's':
					if (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's')
						printf(",");
					break;
				default:
					break;
			}
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
