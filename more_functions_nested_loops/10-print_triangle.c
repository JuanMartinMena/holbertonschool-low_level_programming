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
	int doble;

	doble = size;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (altura = 0; altura <= size; altura++)
		{
			for (base = doble ; base <= size; base--)
			{
				_putchar(' ');
			}
		
			for (base = altura; base <= size; base++)
			{
				_putchar('#');
			}
		_putchar('\n');
	}
}
}
