#include "dog.h"
/**
 * init_dog - Inicializa una variable de tipo structura (dog)
 *
 * @d: puntero a la estructura de tipo struct dog
 * @name: puntero al nombre del perro
 * @age: edad del perro
 * @owner: puntero al nombre del dueño del pero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) // Mientras que el puntero exista.
	{
		d->name = name; // Asigna el puntero "name" al "name" de la estructura "struct dog"
		d->age = age; // Asigna el valor "age" al "age" de la estructura "struct dog"
		d->owner = owner; // Asigna el puntero "owner" al "owner" de la estructura "struct dog"
	}
}
