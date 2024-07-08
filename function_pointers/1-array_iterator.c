#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - ejecuta una funcion en cada elemento de un arreglo
 *
 * @array: puntero al arreglo de enteros
 * @size: tamaño del arreglo
 * @action: puntero a una funcion que toma un entero como argumento
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
