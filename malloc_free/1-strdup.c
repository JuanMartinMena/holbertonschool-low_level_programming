#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy
 *
 * @str: string a duplicar
 *
 */
char *_strdup(char *str)
{
	char *duplicado;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	duplicado = malloc(str[i] * sizeof(char));
	return (duplicado);
}
