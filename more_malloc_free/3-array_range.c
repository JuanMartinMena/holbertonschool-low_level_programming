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
	int *array, i = 0, tamano = 0; // array es el puntero, i es una variable para avanzar detro del puntero y tamano es el total de datos que ahi entre min y max incluidos ellos.

	if (min > max) // queremos que empieze en min y que suba hasta max, por eso no puede ser min mayor a max.
	{
		return (NULL);
	}

	tamano = max - min + 1; // Definimos tamano como el total de datos que va a tener nuestra array.

	array = malloc(tamano * sizeof(int)); // reservamos la memoria para todos los datos y la multiplicamos por el tipo de dato.

	if (array == NULL) // si falla la reserva de memoria, retorna NULL.
	{
		return (NULL);
	}
	for (i = 0; i < tamano; i++) // Bucle para avanzar dentro del array.
	{
		array[i] = min + i; // Expresion dentro del bucle que va aumentando en 1 el valor de cada dato del array hasta tamano
	}
	return (array); // Se retorna el array.
}
