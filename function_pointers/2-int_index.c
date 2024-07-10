#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - busca enteros
 *
 * @array: array
 * @size: numero de elementos del array
 * @cmp: puntero ala funcion
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

