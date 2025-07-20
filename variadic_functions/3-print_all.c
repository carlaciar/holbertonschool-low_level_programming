#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on format string
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	char *str, *sep = "";
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
				case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
				case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
				case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
		}
		if (format[i] == 'c' ||
				format[i] == 'i' ||
				format[i] == 'f' ||
				format[i] == 's')
			sep = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
