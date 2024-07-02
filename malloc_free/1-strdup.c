#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy
 *
 * @str: string a duplicar
 *
 * Return: void
 */
char *_strdup(char *str)
{
	char *duplicado; // este sera el string duplicado.
	int largo1 = 0, largo2 = 0; // estos son las 2 variables que se utilizaran para calcular el largo de los strings.

	if (str == NULL) // si el string solo tiene el '\0'.
	{
		return (NULL);
	}

	while (str[largo1] != '\0') // Calculamos el largo del string.
	{
		largo1++;
	}
	duplicado = malloc((largo1 + 1) * sizeof(char)); // reservamos la memoria para el largo del string + '\0'.

	if (duplicado == NULL) // Si duplicado es NULL que retorne NULL.
	{
		return (NULL);
	}

	for (largo2 = 0; largo2 < largo1; largo2++) // copiamos los valores de la cadena str a la cadena duplicado.
	{
		duplicado[largo2] = str[largo2];
	}
	duplicado[largo1] = '\0'; // Agregamos al final del string el caracter nulo.

	return (duplicado); // Retornamos el string duplicado.
}
