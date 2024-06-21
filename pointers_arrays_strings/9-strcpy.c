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
	int mayor;
	int menor;

	while (src[largo] != '\0')
	{
		largo++;
	}
	while (dest[largo2] != '\0')
	{
		largo2++;
	}
	mayor = largo - largo2;
	menor = largo2 - largo;
	if (largo == largo2)
	{
		dest[largo2] = src[largo];
	}
	else if (largo >= largo2)
	{
		dest[largo2] = src[largo] - mayor;
		src++;
	}
	else
	{
		dest[largo2] = src[largo] - menor;
		src++;
	}
	return (dest);
}
