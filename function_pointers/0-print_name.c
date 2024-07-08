#include "function_pointers.h"
/**
 * print_name - escribe un nombre
 *
 * @name: array de caracteres que contiene el nombre
 * @f: puntero a la funcion de tipo char
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
/**
 * print - imprime una cadena de caracteres
 *
 * @str: cadena de caracteres a imprimir
 *
 * Return: void
 */
void print(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
