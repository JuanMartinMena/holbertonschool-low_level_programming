#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - agrega un nodo al lugar que se pida
 *
 * @h: puntero al puntero de la head de la lista
 * @idx: lugar donde se agregara el nodo
 * @n: el dato que se agregara al nuevo nodo
 *
 * Return: la direccion del nuevo nodo o null si falla o no se puede
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	if (current == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
