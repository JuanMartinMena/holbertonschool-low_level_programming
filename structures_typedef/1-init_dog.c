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
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
