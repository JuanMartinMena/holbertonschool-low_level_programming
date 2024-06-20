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
	int mita;

	while (str[largo] != '\0')
	{
		largo++;
	}
	for (mita = largo / 2; mita < '\0'; mita++)
	{
		_putchar(str[mita]);
	}
	_putchar('\n');
}
