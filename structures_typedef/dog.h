#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - info del perro
 *
 * @name: puntero para el nombre del perro
 * @age: edad del perro
 * @owner: puntero para el dueno del perro
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
