#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - imprime de todo
 *
 * @format: Las distintas opciones
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *string;
	char current;

	va_start(args, format);
	while (format && format[i])
	{
		current = format[i];
		if (i > 0)
			printf(", ");
		switch (current)
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
			{
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
