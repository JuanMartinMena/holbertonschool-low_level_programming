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
	int largo1 = 0, largo2 = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[largo1] != '\0')
	{
		largo1++;
	}
	duplicado = malloc((largo1 + 1) * sizeof(char));

	for (largo2 = 0; largo2 < largo1; largo2++)
	{
		duplicado[largo2] = str[largo2];
	}
	duplicado[largo1] = '\0';

	return (duplicado);
}
