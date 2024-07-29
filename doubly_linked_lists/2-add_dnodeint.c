#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - agrega un nuevo nodo al principio de la lista
 *
 * @head: doble puntero al head de la lista
 * @n: valor del nuevo nodo
 *
 * Return: la direccion de memoria del nuevo nodo
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
