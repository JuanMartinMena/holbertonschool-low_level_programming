#include "main.h"
/**
 * print_square - print
 *
 * @size: variable
 * Return: void
 */
void print_square(int size)
{
	int nlineas;
	int nh;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (nlineas = 0; nlineas < size; nlineas++)
		{
			for (nh = 0; nh < size; nh++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
