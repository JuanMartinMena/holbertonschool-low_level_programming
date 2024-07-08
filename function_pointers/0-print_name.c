#include "function_pointers.h"
#include <stddef.h>
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
