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
	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s + 1);
	return (*s);
}
