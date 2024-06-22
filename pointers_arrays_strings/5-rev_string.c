#include "main.h"
/**
 * rev_string - print
 *
 * @s: variable
 *
 * Return: void
 */
void rev_string(char *s)
{
	int largo = 0;
	char *inicio, *final, dato;

	while (s[largo] != '\0')
	{
		largo++;
	}
	inicio = s;
	final = s + largo - 1;

	while (final > inicio)
	{
		dato = *inicio;
		*inicio = *final;
		*final = dato;

		inicio++;
		final--;
	}
}
