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
	int largo2 = 0;

	while (src[largo] != '\0')
	{
		largo++;
	}
	while (dest[largo2] != '\0')
	{
		largo2++;
	}
	if (largo == largo2)
	{
		while (largo != '\0')
		{
		dest[largo2] = src[largo];
		src++;
		}
	}
	else if (largo > largo2)
	{
		while (largo2 != '\0')
		{
		dest[largo2] = src[largo];
		dest++;
		}
	}
	else
	{
		while (largo != '\0')
		{
		dest[largo2] = src[largo];
		src++;
		}
	}
	return (dest);
}
