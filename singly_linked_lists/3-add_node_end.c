#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_length - calcula el largo de un string
 *
 * @str: string
 *
 * Return: largo del string
 */
size_t string_length(const char *str)
{
	size_t largo = 0;

	while (str[largo] != '\0')
	{
		largo++;
	}
	return (largo);
}
/**
 * add_node_end - arega un nodo al final
 *
 * @head: un puntero doble al header de la lista
 * @str: el string que se va a duplicar en el nuevo nodo
 *
 * Return: direccion de la memoria del nuevo nodo
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	char *duplicado;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	duplicado = strdup(str);
	if (duplicado == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = duplicado;
	new_node->len = string_length(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
