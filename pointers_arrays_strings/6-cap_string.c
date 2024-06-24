#include "main.h"
/**
 * *cap_string - print
 *
 * @str: string
 *
 * Return: void
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int empiezo = 0;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\n' || *ptr == ',' || *ptr == ';'
				|| *ptr == '.' || *ptr == '!' || *ptr == '?'
				|| *ptr == '"' || *ptr == '(' || *ptr == ')'
				|| *ptr == '{' || *ptr == '}')
		{
			_putchar(' ');
			empiezo = 1;
		}
		else if (empiezo == 1 && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		else
		{
		}
		empiezo = 0;
		ptr++;
	}
	return (str);
}
