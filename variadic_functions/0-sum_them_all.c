#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Suma todos los parametros
 *
 * @n: Numero de parametros
 *
 * Return: La suma de los parametros
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(argumentos, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argumentos, int);
	}
	va_end(argumentos);

	return (sum);
}
