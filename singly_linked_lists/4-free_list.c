#include "lists.h"
#include <stdlib.h>
/**
 * free_list - libera cada espacio de memoria de la lista
 *
 * @head: puntero al head de la lista
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
