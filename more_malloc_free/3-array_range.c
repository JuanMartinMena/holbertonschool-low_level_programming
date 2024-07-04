#include "main.h"
#include <stdlib.h>
/**
 * array_range - array de int
 *
 * @min: numero
 * @max: numero
 *
 * Return: array int
 */
int *array_range(int min, int max)
{
	int *array, i = 0, tamano = 0;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(tamano * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < tamano; i++)
	{
		array[i] = min + 1;
	}

	return (array);
}
