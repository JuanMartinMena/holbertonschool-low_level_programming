#include "main.h"
#include <stdlib.h>
/**
 * str_concat - hace que 2 string se concatenen
 *
 * @s1: string1
 * @s2: string2
 *
 * Return: string concatenado
 */
char *str_concat(char *s1, char *s2) 
{
	int i = 0, j = 0, k = 0; // variables para manipular strings
	char *final; // string concatenado

	if (s1 == NULL || s2 == NULL) // Si s1 o s2 son NULL entonces que retorne una cadena vacia.
	{
		s1 = "";
		s2 = "";
	}
	while (s1[i] != '\0') // ver el largo de s1.
	{
		i++;
	}
	while (s2[j] != '\0') // ver el largo de s2.
	{
		j++;
	}

	final = malloc((i + j + 1) * sizeof(char)); // reservar memoria para los 2 strings + '\0'.

	if (final == NULL) // Para el caso que de error que retorne NULL.
	{
		return (NULL);
	}
	for (k = 0; k < i; k++) // igualamos el valor de final[k] a s1[k] para que se copie el string al principio del strig final.
	{
		final[k] = s1[k];
	}
	for (k = 0; k < j; k++) // Decimos final[k + i] porque queremos que empieze a copiar s2[k] despues del strign s1.
	{
		final[k + i] = s2[k];
	}

	final[i + j] = '\0'; // Ponemos un caracter nulo al final de la cadena.

	return (final); //retonamos el string.
}
