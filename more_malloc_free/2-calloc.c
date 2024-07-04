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
	char *limpieza, *puntero;

	if (nmemb <= 0 || size <= 0) // Si cualquiera de las 2 variables es menor o igual a 0 retornamos NULL.
	{
		return (NULL);
	}

	total = nmemb * size; // Definimos la variable total como la multiplicacion entre "nmemb" y "size".

	puntero = malloc(total); // Reservamos memoria para el puntero "puntero" de cantidad de la variable "total".

	if (puntero == NULL) // Si la reserva de memoria falla se retorna NULL.
	{
		return (NULL);
	}

	limpieza = puntero; // Asignamos "limpieza" a "puntero".

	for (i = 0; i < total; i++) //bucle para recorrer el puntero "limpieza".
	{
		limpieza[i] = 0; // Se asigna el valor 0 para cada dato de limpieza.
	}
	return (puntero); // Retornamos el puntero "puntero".
}
