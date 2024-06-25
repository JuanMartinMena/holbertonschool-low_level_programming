#include "main.h"
/**
 * _memcpy - print
 *
 * @dest: pointer2
 * @src: pointer1
 * @n: bytes
 *
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
