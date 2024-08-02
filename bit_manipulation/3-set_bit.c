#include "main.h"
/**
 * set_bit - Establece el valor del bit a 1 en un índice dado
 *
 * @n: Puntero al número en el que se establecerá el bi
 * @index: El índice del bit, comenzando desd
 *
 * Return: 1 si funcionó, o -1 si ocurrió un err
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits = sizeof(*n) * 8;

	if (index >= num_bits)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
