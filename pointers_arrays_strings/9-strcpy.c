#include "main.h"
/**
 * *_strcpy - print
 *
 * @dest: string2
 * @src: string1
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int largo = 0;
	int i;

	while (src[largo] != '\0')
	{
		largo++;
	}
	for (i = 0; i <= largo; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
