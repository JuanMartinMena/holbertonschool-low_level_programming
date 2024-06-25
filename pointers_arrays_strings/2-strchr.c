#include "main.h"
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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
