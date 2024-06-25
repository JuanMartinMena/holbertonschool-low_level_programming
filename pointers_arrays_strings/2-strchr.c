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
		if (c == '\0')
		{
			return ('\0');
		}
		else
		{
			return (s);
		}
		s++;
	}
	return (s);
}
