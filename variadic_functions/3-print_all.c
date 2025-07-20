#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on format string
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *str;
	char *sep = "";
	char valid[] = "cifs";

	va_start(args, format);

	while (format && format[i])
	{
		while (valid[j])
		{
			if (format[i] == valid[j])
			{
				printf("%s", sep);
				if (format[i] == 'c')
					printf("%c", va_arg(args, int));
				else if (format[i] == 'i')
					printf("%d", va_arg(args, int));
				else if (format[i] == 'f')
					printf("%f", va_arg(args, double));
				else if (format[i] == 's')
				{
					str = va_arg(args, char *);
					printf("%s", str ? str : "(nil)");
				}
				sep = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}

	va_end(args);
	printf("\n");
}
