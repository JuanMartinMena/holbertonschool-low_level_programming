#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convierte un numero de binario a int
 *
 * @b: el numero en binario que te pasan
 *
 * Return: numero en int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b != NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
