#include "main.h"
/**
 * _print_rev_recursion - print_string_reverse
 *
 * @s: string
 *
 * Return: string_reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		if (*s >= 0)
		{
			_putchar(s*);
			s--;
		}
		return
	}
	_print_rev_recursion(s + 1);

}
