#include "main.h"
/**
 * print_sign - print
 * @n: numero
 *
 * Return: void
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	_putchar('\n');

	return (1);
}
	else if (n == 0)
{
	_putchar(0);
	_putchar('\n');

	return (0);
}
	else
{
	_putchar('-');
	_putchar('\n');

	return (-1);
}
}
