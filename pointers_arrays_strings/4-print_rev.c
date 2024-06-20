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
	while (*s != '\0')
	{
		s++;
	}
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
}
