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
	unsigned int i = 0, j;
	const char t_arg[] = "cifs";
	char *string, *separador = "";

	va_start(args, format);
	while (format && format[i])
	{
		for (j = 0; t_arg[j]; j++)
		{
			if (format[i] == t_arg[j])
			{
				printf("%s", separador);
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
					string = va_arg(args, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s", string);
					break;
				}
				separador = ", ";
				break;
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
