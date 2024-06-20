#include "main.h"
/**
 * puts_half - print
 *
 * @str: variable
 *
 * Return: void
 */
void puts_half(char *str)
{
	int largo = 0;
	int mita = 0;
	int n;

	while (str[largo] != '\0')
	{
		largo++;
	}
	n = (largo - 1) / 2;
	for (mita = largo / 2; mita != '\0'; mita++)
	{
		if (mita % 2 == 0)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
