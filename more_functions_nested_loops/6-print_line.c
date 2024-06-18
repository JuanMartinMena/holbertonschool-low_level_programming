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

	a = '_';
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar((a) * n);
		}
}
