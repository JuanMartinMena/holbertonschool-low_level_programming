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
	unsigned int i;
	
	arr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
