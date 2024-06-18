#include "main.h"
/**
 * print_diagonal - print
 *
 * @n: numero
 * Return: void
 */
void print_diagonal(int n)
{
	int c;
	int a;

	a = 92;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (c = 0; c <  n; c++)
			{
				while (c < n)
				{
				_putchar(' ');
				}
				_putchar(a);
				_putchar('\n');
			}
		}
}
