#include "main.h"
/**
 * times_tables - print
 *
 *
 */
void times_table(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0' + a * 0);
		_putchar(',');
		_putchar(' ');
	}
	for (b = 0; b <= 9; b++)
	{
		_putchar('0' + b * 1);
		_putchar(',');
		_putchar(' ');
	}
	for (c = 0; c <= 9; c++)
	{
		_putchar('0' + c * 2);
		_putchar(',');
		_putchar(' ');
	}
	for (d = 0; d <= 9; d++)
	{
		_putchar('0' + d * 3);
		_putchar(',');
		_putchar(' ');
	}
	for (e = 0; e <= 9; e++)
	{
		_putchar('0' + e * 4);
		_putchar(',');
		_putchar(' ');
	}
	for (f = 0; e <= 9; f++)
	{	_putchar('0' + f * 5);
		_putchar(',');
		_putchar(' ');
	}
}
