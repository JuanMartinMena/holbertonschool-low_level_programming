#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - duplica string
 *
 * @str: string
 *
 * Return: puntero al string duplicado
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0, largo = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (largo = 0; str[largo] != '\0'; largo++)
	{
	}
	dup = malloc(sizeof(char) * (largo + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < largo; i++)
	{
		dup[i] = str[i];
	}
	dup[largo] = '\0';
	return (dup);
}
/**
 * new_dog - cre nuevo perro
 *
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueño del perro
 *
 * Return: puntero a la nueva structur dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
