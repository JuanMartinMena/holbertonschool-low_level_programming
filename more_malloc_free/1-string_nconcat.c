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
	int i = 0, j = 0, k = 0;
	char *final;
	unsigned int largo;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (j < n)
	{
		largo = j;
	}
	else
	{
		largo = n;
	}
	final = malloc((i + largo + 1) * sizeof(char));
	if (final == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		final[k] = s1[k];
	}
	for (k = 0; k < largo; k++)
	{
		final[k + i] = s2[k];
	}
	final[i + largo] = '\0';
	return (final);
}
