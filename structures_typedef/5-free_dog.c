#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libera memoria del perro
 * @d: puntero de la structure dog_t que se va al liberar
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name); // te libera la memoria usada para "name"
		free(d->owner); // te libera la memoria usada para "owner"
		free(d); // te libera la memoria usada para la estructura
	}
}
