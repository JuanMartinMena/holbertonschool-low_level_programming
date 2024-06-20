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
	mita = largo / 2;
	while (mita != '\0')
	{
		if (mita % 2 == 0)
		{
		_putchar(str[mita]);
		mita++;
		}
	_putchar('\n');
	}
}
