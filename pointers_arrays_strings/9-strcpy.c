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

	while (src[largo] != '\0')
	{
		largo++;
	}
	while (dest[largo] != '\0')
	{
	dest[largo] = src[largo];
	largo++;
	}
	dest[largo] = '\0';

	return (dest);
}
