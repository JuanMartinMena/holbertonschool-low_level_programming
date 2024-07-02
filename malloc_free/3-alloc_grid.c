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
	char *str1, *str2;
	int **array;
	int primero = 0, segundo = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (primero = 0; primero < width; primero++)
	{
		str1[primero] = width;
	}
	for (segundo = 0; segundo < height; segundo++)
	{
		str2[segundo] = height;
	}

	array = malloc(sizeof(int) * (height * width));

	return (array);
}
