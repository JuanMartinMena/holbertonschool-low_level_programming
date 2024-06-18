#include "main.h"
/**
 * print_line - print
 *
 * @n: number
 * Return: void
 */
void print_line(int n)
{
	int a;
	int i;

	a = '_';
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 0; i <= n; i++)
			{
			_putchar(a);
			}
			_putchar('\n');
		}
}
