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
	int i = 0, j = 0, k = 0;
	char *final;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
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

	final = malloc((i + j + 1) * sizeof(char));

	if (final == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		final[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		final[k + i] = s2[k];
	}

	final[i + j] = '\0';

	return (final);
}
