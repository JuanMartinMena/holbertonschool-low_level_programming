#include "lists.h"
/**
 * dlistint_len - retorna el numero de elmentos
 *
 * @h: puntero al header de la lista
 *
 * Return: numero de elementos
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
