#include "main.h"
/**
 * _abs - function
 *
 * @n: Numero
 *
 * Return: void
 */
int _abs(int n)
{
	if (n < 0)
{
	_putchar(-n);
}
	else
{
	_putchar(n);
}
	_putchar('\n');

	return (n);
}
