#include "main.h"
/**
 * print_binary - Imprime la representación binaria de un núme
 *
 * @n: El número a imprimir en binario
 *
 * Return: el numero en binario
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8 - 1;
	int started = 0;

	while (bit >= 0)
	{
		if ((n >> bit) & 1)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		bit--;
	}
	if (!started)
	{
		_putchar('0');
	}
}
