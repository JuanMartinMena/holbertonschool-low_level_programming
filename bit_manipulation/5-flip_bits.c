#include "main.h"
/**
 * flip_bits - Cuenta el número de bits que se deben cambia
 *
 * @n: El primer númer
 * @m: El segundo númer
 *
 * Return: El número de bits que se deben cambia
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
