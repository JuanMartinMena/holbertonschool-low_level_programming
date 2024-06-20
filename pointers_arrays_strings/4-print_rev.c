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
	char ultimo;

	while (*s != '\0')
	{
		s++;
	}
	s = & ultimo;
	for (*s = 0; *s <= ultimo; s++)
	{
		_putchar(*s);
		ultimo--;
	}
}
