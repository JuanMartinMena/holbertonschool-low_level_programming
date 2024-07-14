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
		if (current == 'c' || current == 'i' || current == 'f' || current == 's')
		{
			printf("%s", separador);
			if (current == 'c')
				printf("%c", va_arg(args, int));
			if (current == 'i')
				printf("%d", va_arg(args, int));
			if (current == 'f')
				printf("%f", va_arg(args, double));
			if (current == 's')
			{
				string = va_arg(args, char *);
				string = string ? string : "(nil)";
				printf("%s", string);
			}
			separador = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
