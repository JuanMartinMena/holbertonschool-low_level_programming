#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - hace que 2 string se concatenen
 *
 * @s1: string1
 * @s2: string2
 * @n: posible largo
 *
 * Return: string concatenado
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, largo;
	char *final;

	if (s1 == NULL) // Si el string s1 = NULL, retornamos cadena vacia.
		s1 = "";
	if (s2 == NULL) // Si el string s2 = NULL, retornamos cadena vacia.
		s2 = "";
	while (s1[i] != '\0') // Calculamos la longitud del string s1.
	{
		i++;
	}
	while (s2[j] != '\0') // Calculamos la longitud del string s2.
	{
		j++;
	}
	if (j < n) // Si la variable n es mayora al largo del string s2 usamos el largo del string s2.
	{
		largo = j;
	}
	else // Sino usamos la variable n como el largo.
	{
		largo = n;
	}
	final = malloc((i + largo + 1) * sizeof(char)); // Reservamos memoria para el string s1 (i), para largo (n/j) + 1 ('\0').
	if (final == NULL) // Si falla la reserva de memoria, retornamos NULL.
	{
		return (NULL);
	}
	for (k = 0; k < i; k++) // Bucle para recorrer el string final.
	{
		final[k] = s1[k]; // A medida que se va recoriendo final, igualamos el valor de final a s1. (se copia s1 a final).
	}
	for (k = 0; k < largo; k++) // Bucle para recorrer el string final.
	{
		final[k + i] = s2[k]; // Despues de los datos copiados de s1 se copian los datos de s2 a final.
	}
	final[i + largo] = '\0'; // Se termina el string con un dato nulo.
	return (final); // Se retorna el string final.
}
