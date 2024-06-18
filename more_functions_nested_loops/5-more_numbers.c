#include "main.h"
/**
 * more_numbers - print
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar('1');
			}
				_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
}
