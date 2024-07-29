#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - agrega un nodo al principio
 *
 * @head: untero doble al header de la lista
 * @str: el string que se va a duplicar en el nuevo nodo
 *
 * Return: Direccion de a memoria del nuevo elemento y null si falla
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
