#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - escribe un nombre
 *
 * @name: un puntero que apunta al nombre que se va a imprimir
 * @f: un puntero a funcion char
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL) // Mientras que "f" y "name" no sean NULL.
	{
		f(name); // Se llama a la funcion apuntada por "f" y se le pasa "name" como argumento
	}
}
