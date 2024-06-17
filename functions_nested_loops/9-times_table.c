#include "main.h"
/**
 * times_table - print
 *
 * Return: void
 */
void times_table(void)
{
	int c;
	int b;
	int a;

	for (c = 0; c <= 9; c++)
	{
		for (b = 0; b <= 9; b++)
		{
			a = b * c;
			if (b != 9)
			{
				if (a >= 10)
				{
				_putchar('0' + a / 10);
				_putchar('0' + a % 10);
				_putchar(',');
				_putchar(' ');
				}
				else
				{
				_putchar('0' + a);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}
			if (a >= 10)
			{
				_putchar('0' + a / 10);
				_putchar('0' + a % 10);
				_putchar('\n');
			}
			else
			{
				_putchar('0' + a);
				_putchar('\n');
			}
		}
	}
}
