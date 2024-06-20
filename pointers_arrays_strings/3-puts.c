#include "main.h"
/**
 * _puts - print
 *
 * @str: variable
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
