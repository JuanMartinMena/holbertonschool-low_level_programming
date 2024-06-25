#include "main.h"
#include <stddef.h>
/**
 * *_strchr - print
 *
 * @s: pointer
 * @c: caracter
 *
 * Return: void
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		return NULL;
	}

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
