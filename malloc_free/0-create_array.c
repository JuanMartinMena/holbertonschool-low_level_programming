#include "main.h"
#include <stdlib.h>
/**
 * create_array - array of chars
 *
 * @size: tama√o
 * @c: caracter
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(size * sizeof(char)); // aca lo que se esta haciendo es crear el espacio de memoria justo para size.

	if (size == 0) // aca lo que dijo es que si size es 0 que me retorne NULL.
	{
		return (NULL);
	}
	if (arr == NULL) // aca lo que se dice es que si el array no tiene nada solo el NULL que me retorne NULL.
	{
		return (NULL);
	}
	while (i < size) // Se hace un bucle para que la variable i (que tiene valor 0) avance hasta el tama√o de size - 1(\0).
	{
		arr[i] = c;
		i++;
	}
	return (arr); // Se retorna arr porque queremos ver el array creado.
}
