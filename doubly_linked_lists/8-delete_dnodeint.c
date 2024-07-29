#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - elimina el nodo en el lugar que se pida
 *
 * @head: puntero doble al head de la lista
 * @index: lugar en el que se eliminara el nodo
 *
 * Return: -1 si no se puede eliminar o 1 si se pudo
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (current == NULL)
			return (-1);
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->next == NULL && current->prev != NULL)
		current->prev->next = NULL;
	free(current);
	return (1);
}
