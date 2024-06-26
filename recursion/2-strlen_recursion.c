#include "main.h"
/**
 * _strlen_recursion - length of string
 *
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
	}
	return (i);
}
