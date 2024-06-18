#include "main.h"
/**
 * print_diagonal - print
 *
 * @n: numero
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;
	int c;
	int d;

	a = 92;
	b = ' ';
	d = n * b;

	for (c = 0; c <= n; c++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(d);
			_putchar(a);
			_putchar('\n');
		}
	}
}
