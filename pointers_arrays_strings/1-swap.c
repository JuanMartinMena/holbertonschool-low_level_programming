#include "main.h"
/**
 * swap_int - print
 *
 * @a: variable1
 * @b: variable2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
