#include "main.h"
/**
 * _strlen - print
 *
 * @s: largo
 * Return: void
 */
int _strlen(char *s)
{
	int largo = 0;

	while (*s != '\0')
	{
		largo++;
		s++;
	}
	return (largo);
}
