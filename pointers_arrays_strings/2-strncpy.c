#include "main.h"
/**
 * *_strncpy - print
 *
 * @dest: str1
 * @src: str2
 * @n: variable
 *
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int limite;

	for (limite = 0; limite < n && src[limite] != '\0'; limite++)
	{
		dest[limite] = src[limite];
	}
	for (; limite < n; limite++)
	{
		dest[limite] = '\0';
	}
	return (dest);
}
