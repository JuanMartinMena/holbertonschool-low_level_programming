#include "main.h"
/**
 * clear_bit - Establece el valor del bit a 0 en un índice dad
 *
 * @n: Puntero al número en el que se establecerá el bit
 * @index: El índice del bit, comenzandodesde 0
 *
 * Return: 1 si funcionó, o -1 si ocurrió unrror
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
