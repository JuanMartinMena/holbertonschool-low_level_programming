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

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (c = 0; c <= n; c++)
			{
			_putchar(d);
			_putchar(a);
			_putchar('\n');
			}
		}
}
