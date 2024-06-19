#include "main.h"
/**
 * reset_to_98 - print
 *
 * @n: variable
 * Return: void
 */
void reset_to_98(int *n)
{
	int v = 10;

	n = & v;

	*n = 98;
}
