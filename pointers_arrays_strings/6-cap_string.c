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
	int empiezo = 1;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\n' || *ptr == ',' || *ptr == ';'
				|| *ptr == '.' || *ptr == '!' || *ptr == '?'
				|| *ptr == '"' || *ptr == '(' || *ptr == ')'
				|| *ptr == '{' || *ptr == '}' || *ptr == '	')
		{
			empiezo = 1;
			_putchar(' ');
		}
		else if (empiezo && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
			empiezo = 0;
		}
		else
		{
			_putchar(*ptr);
		}
		ptr++;
	}
	return (str);
}
