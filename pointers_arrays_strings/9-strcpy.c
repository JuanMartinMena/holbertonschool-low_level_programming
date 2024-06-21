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
	for (dest[largo] = 0; dest[largo] <= largo; largo++)
	{
	dest[largo] = src[largo];
	}
	_putchar('\n');
	return (dest);
}
