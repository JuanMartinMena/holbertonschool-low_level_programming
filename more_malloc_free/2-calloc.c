#include "main.h"
#include <stdlib.h>
/**
 * _calloc - funcion que aloja memoria para un array
 *
 * @nmemb: cantidad de elementos
 * @size: tamaño de elementos
 *
 * Return: array doble inicializado con memoria 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, total = 0;
	void *puntero;
	char *limpieza;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	total = nmemb * size;

	puntero = malloc(total);

	if (puntero == NULL)
	{
		return (NULL);
	}

	limpieza = (char *) puntero;

	for (i = 0; i < total; i++)
	{
		limpieza[i] = 0;
	}
	return (puntero);
}
