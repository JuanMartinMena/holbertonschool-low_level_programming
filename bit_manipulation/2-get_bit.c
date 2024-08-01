#include "main.h"
/**
 * get_bit - Obtiene el valor del bit en un índice dado
 *
 * @n: El número del cual se obtendrá el bit
 * @index: El índice del bit, comenzando desde 0
 *
 * Return: El valor del bit en el índice dado o -1 si ocurre un error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bits = sizeof(n) * 8;

	if (index >= num_bits)
		return (-1);
	return ((n >> index) & 1);
}
