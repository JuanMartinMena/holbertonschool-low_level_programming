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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif