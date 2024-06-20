#include "main.h"
/**
 * print_rev - print
 *
 * @s: variable
 *
 * Return: void
 */
void print_rev(char *s)
{
	int largo = 0;
	int atras;

	while (s[largo] != '\0')
	{
		largo++;
	}
	for (atras = largo - 1; atras >= 0; atras--)
	{
		_putchar(s[atras]);
	}
	_putchar('\n');
}
