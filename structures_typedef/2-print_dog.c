#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - printea los datos del perro
 *
 * @d: puntero hacia los datos del perro
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL) // Si no encuentra valor para "d" retorna NULL
	{
		return;
	}
	if (d->name == NULL) // Si el "name" dentro de la structura "dog" es NULL, entonces imprime "Name: (nil)" y un salto de linea.
	{
		printf("Name: (nil)\n");
	}
	else // Si el "name" dentro de la structura "dog" existe, entonces imprime "Name: (el valor de name)" y un salto de linea.
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %.6f\n", d->age); // Imprime el valor de "age" hasta con 6 decimales
	if (d->owner == NULL) // Si el "owner" dentro de la structura "dog" es NULL, entonces imprime "Owner: (nil)" y un salto de linea.
	{
		printf("Owner: (nil)\n");
	}
	else // Si "owner" dentro de la structura "dog" existe, entonces imprime "Onwer: (el dato de owner)" y un salto de linea.
	{
		printf("Owner: %s\n", d->owner);
	}
}
