#include "main.h"
/**
 * puts2 - print
 *
 * @str: variable
 *
 * Return: void
 */
void puts2(char *str)
{
	int largo = 0;

	while (str[largo] != '\0')
	{
		if (largo % 2 == 0)
		{
			_putchar(str[largo]);
			largo++;
		}
	_putchar('\n');
	}
}
