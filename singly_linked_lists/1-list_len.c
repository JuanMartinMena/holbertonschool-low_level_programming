#include "lists.h"
/**
 * list_len - retorna el numero de elementos en una list list_t
 *
 * @h: puntero al header de la lista
 *
 * Return: Numero de elementos en una lista
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
