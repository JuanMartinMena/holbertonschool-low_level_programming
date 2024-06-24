#include "main.h"
/**
 * reverse_array - array_alrevez
 *
 * @a: array
 * @n: numero_en_el_array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int inicio = 0;
	int final = n - 1;
	int valorinicio;

	while (inicio < final)
	{
		valorinicio = a[inicio];
		a[inicio] = a[final];
		a[final] = valorinicio;
		inicio++;
		final--;
	}
}
