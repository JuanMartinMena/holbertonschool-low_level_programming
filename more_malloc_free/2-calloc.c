#include "main.h"
#include <stdlib.h>
/**
 * _calloc - funcion que aloja memoria para un array
 *
 * @nmemb: filas
 * @size: columnas
 *
 * Return: array doble inicializado con memoria 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int **array, i = 0, j = 0;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * sizeof(unsigned int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		array[i] = malloc(size * sizeof(unsigned int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
		return (NULL);
		}
	}
	for (j = 0; j < size; j++)
	{
		array[i][j] = 0;
	}
	return (array);
}
