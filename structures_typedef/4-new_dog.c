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

	if (str == NULL) // Si el string es NULL retorna NULL
	{
		return (NULL);
	}
	for (largo = 0; str[largo] != '\0'; largo++) // Se averigua el largo del string
	{
	}
	dup = malloc(sizeof(char) * (largo + 1)); // Se reserva espacio del tamaño del string + el caracter nulo y se almacena e "dup"
	if (dup == NULL) // Si la reserva falla retorna NULL
	{
		return (NULL);
	}
	for (i = 0; i < largo; i++) // Bucle para copiar cada valor de la cadena "str" a "dup"
	{
		dup[i] = str[i];
	}
	dup[largo] = '\0'; // Se le agrega al final de la cadena de "dup" un caracter nulo
	return (dup); // Se retorna la cadena duplicada
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
	dog_t *d; // puntero que apunta a la estructura "dog_t"
	char *new_name; // puntero que aputa al nombre de la copia del perro
	char *new_owner; // puntero que apunta al nombre de la copia del dueño

	d = malloc(sizeof(dog_t)); // Se reserva memoria para la estructura de tipo "dog_t" en el puntero "d"
	if (d == NULL) // Si falla la reserva retorna NULL
	{
		return (NULL);
	}
	new_name = _strdup(name); // duplicamos el string "name" a al string "new_name"
	if (new_name == NULL) // Si no ahi nada que copiar libera la memoria y retorna NULL
	{
		free(d);
		return (NULL);
	}
	new_owner = _strdup(owner); // Duplicamos el string "owner" al string "new_owner"
	if (new_owner == NULL) // Si no ahi nada que copiar libera la memoria de "new_name" y la de "new_owner" y retorna NULL
	{
		free(new_name);
		free(d);
		return (NULL);
	}
	d->name = new_name; // Asignamos el valor de "new_name" a "name" de la copia
	d->owner = new_owner; // Asignamos el valor de "new:owner" a "owner" de la copia
	d->age = age; // asgina el valor de "age" a "age" de la copia
	return (d); // retorna nuevo perro
}
