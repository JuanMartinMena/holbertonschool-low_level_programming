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

	while (str[largo] != '\0')
	{
		largo++;
	}
	if (largo % 2 == 0)
	{
		mita = largo / 2;
		_putchar(str[mita]);
		mita++;
	}
	else
	{
		mita = (largo - 1) / 2;
		_putchar(str[mita]);
		mita++;
	}
	_putchar('\n');
}
