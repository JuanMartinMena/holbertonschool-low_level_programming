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
	char *string, *separador = "";
	char current;

	va_start(args, format);
	while (format && format[i])
	{
		current = format[i];
		switch (current)
		{
			case 'c':
				printf("%s%c", separador, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separador, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separador, va_arg(args, double));
				break;
			case 's':
			{
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", separador, string);
				break;
			}
		}
		separador = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
