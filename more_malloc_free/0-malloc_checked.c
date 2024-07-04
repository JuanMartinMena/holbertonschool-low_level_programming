#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - guarda memoria en un puntero
 *
 * @b: numero positivo
 *
 * Return: memoria
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *memoria; // Puntero de tipo unsigned int.

	memoria = malloc(b); // Reservamos la memoria para el puntero "memoria".

	if (memoria == NULL) // Si la reserva de memoria falla.
	{
		exit(98); // Exit corta el programa abruptamente y da codigo de estado 98 (porque lo pedia).
	}
	return (memoria); // Retornamos el puntero.
}
