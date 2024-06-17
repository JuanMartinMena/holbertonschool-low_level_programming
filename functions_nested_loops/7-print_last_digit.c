#include "main.h"
/**
 * print_last_digit - print
 * @n: numero random
 *
 * Return: Last number
 */
int print_last_digit(int n)
{
	int last = n % 10;

	while (last < 0)
{
	last = last * -1;
	_putchar(last + '0');
}
	while (last >= 0)
{
	_putchar(last + '0');
}
	return (0);

}
