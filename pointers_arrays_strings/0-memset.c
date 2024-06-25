#include "main.h"
/**
 * _memset - print
 *
 * @s: string
 * @b: bytes
 * @n: Number_of_bytes_to_fill
 *
 * Return: num of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
