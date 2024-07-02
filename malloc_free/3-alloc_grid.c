#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Hacer un array doble
 *
 * @width: numero
 * @height: numero2
 *
 * Return: array doble
 */
int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0; // i (filas) | j (columnas) | **array (puntero doble para almacenar la matriz)

	if (width <= 0 || height <= 0) // Esto verifica que el array doble se pueda hacer, si uno es <= 0 no se puede.
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *)); // Reservamos memoria para todas las filas

	if (array == NULL) // Si el array da error que retorne NULL.
	{
		return (NULL);
	}
	for (i = 0; i < height; i++) // Este for sirve para hacer que el array recorra todos los bytes de las filas.
	{
		array[i] = malloc(width * sizeof(int)); // Reservamos memoria para la columnas de cada fila por eso array[i].

		if (array[i] == NULL) // Para evitar memorias ocupadas al pedo.
		{
			for (j = 0; j < i; j++) // Que vaya recordiendo cada uno de las columnas y si alguna esta vacia la limpia.
			{
				free(array[j]);
			}

			free(array); // Termina de limpiar lo que quedo

			return (NULL);
		}
		for (j = 0; j < width; j++) // Esto lo que hace es que calcula el largo de width
		{                 
			array[i][j] = 0; // Esto lo que hace es que para todos los valores del array los inicie en 0
		}
	}
	return (array); // Te retorna el array doble.
}
