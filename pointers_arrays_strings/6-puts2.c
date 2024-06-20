#include "main.h"
/**
 * puts2 - print
 *
 * @str: variable
 *
 * Return: void
 */
void puts2(char *str)
{
	int largo;

	while (str[largo] != '\0')
	{
		largo++;
	}
	while (str[largo] % 2 == 0)
	{
		_putchar(largo);
	}
}

