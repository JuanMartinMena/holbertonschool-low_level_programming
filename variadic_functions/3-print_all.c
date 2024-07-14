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
	int printed = 0, count = 0;

	va_start(args, format);
	while ((current = format[i++]))
	{
		if (current == 'c' || current == 'i' || current == 'f' || current == 's')
		{
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
			printed++;
			count++;
		}
		}
	va_end(args);
	printf("\n");
	}
}
