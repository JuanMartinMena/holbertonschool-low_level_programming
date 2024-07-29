#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - retorna el nth node de la lsita
 *
 * @head: puntero al head de la lista
 * @index: el index del nodo a retornar
 *
 * Return: el nodo del index dado o null si no existe
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
