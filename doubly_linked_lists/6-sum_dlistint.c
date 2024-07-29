#include "lists.h"
/**
 * sum_dlistint - suma toda la data(n) de la lista
 *
 * @head: puntero a la cabeza de la lista
 *
 * Return: retorna la suma de la data de la lista
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
