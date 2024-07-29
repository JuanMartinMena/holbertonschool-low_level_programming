#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - libera una dlistint_t lista
 *
 * @head: puntero al head de la lista
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
