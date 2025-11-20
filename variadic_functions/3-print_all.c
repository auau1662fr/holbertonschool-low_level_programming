#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *  print_all - Prints anything
 *
 *  @format: List of args passed to function
 *
 *  Return: void
 */

void print_all(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;
	int first = 1;

	va_start(ap, format);

	while (format && format[i])
	{
	if (!first)
	printf(", ");

	switch (format[i])
	{
		case 'c':
		printf("%c", va_arg(ap, int));
		first = 0;
		break;

		case 'i':
		printf("%d", va_arg(ap, int));
		first = 0;
		break;

		case 'f':
		printf("%f", va_arg(ap, double));
		first = 0;
		break;

		case 's':
		str = va_arg(ap, char *);
		if (str == NULL)
		printf("(nil)");
		else
			printf("%s", str);
		first = 0;
		break;

		default:
		i++;
		continue;
	}

	i++;
}

	va_end(ap);
	printf("\n");
}

