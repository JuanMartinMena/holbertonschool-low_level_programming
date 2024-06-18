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
	int c = 0;

	a = 92;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			while (c <= n)
			{
				_putchar(' ');
			}
				_putchar(a);
				_putchar('\n');
				c++;
		}
}
