#include "main.h"
/**
 * print_triangle - print
 *
 *
 * @size - size
 * Return: void
 */
void print_triangle(int size)
{
	int altura;
	int base;

	while (size <= 0)
	{
		_putchar('\n');
	}
	for (base = 0; base <= size; base++)
	{
		_putchar(' ');
	}
		for (altura = 0; altura < size; altura++)
		{
				_putchar('#');
		}
}
