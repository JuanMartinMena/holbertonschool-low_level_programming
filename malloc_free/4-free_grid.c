#include "main.h"
#include <stdlib.h>
/**
 * free_grid - liberar memoria de array
 *
 * @grid: array doble
 * @height: numero
 *
 * Return: memoria liberada
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++) // Libera la memoria de cada fila de el array doble
	{
		free(grid[i]);
	}
	free(grid); // Termina de limpiar el array
}
