#include "main.h"
/**
 * print_triangle - print
 *
 *
 * @size: - size
 * Return: void
 */
void print_triangle(int size)
{
	int base;
	int altura;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (altura = 0; altura <= size; altura++)
		{
			for (base = 1; base <= size - altura; base++)
			{
				_putchar(' ');
			}
		
			for (base = 1; base <= size; base++)
			{
				_putchar('#');
			}
		_putchar('\n');
	}
}
}
