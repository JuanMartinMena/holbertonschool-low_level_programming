#include "main.h"
/**
 * *_strcat - print
 *
 * @dest: variable1
 * @src: variable2
 *
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *final = dest;

	while (*final != '\0')
	{
		final++;
	}
	while (*src != '\0')
	{
		*final = *src;
		final++;
		src++;
	}
	*final = '\0';
	return (dest);
}
