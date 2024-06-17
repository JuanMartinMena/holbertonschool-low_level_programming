#include "main.h"
/**
 * print_last_digit - print
 * @n: numero random
 *
 * Return: Last number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
{
	_putchar(-last + '0');
	return (-last);
}
	else
{
	_putchar(last + '0');
	return (last);
}
}
