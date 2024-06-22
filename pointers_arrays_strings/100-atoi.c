#include "main.h"
/**
 * _atoi - print
 *
 * @s: variable
 *
 *
 * Return: void
 */
int _atoi(char *s)
{
	int signo = 1;
	int resultado = 0;
	int numero = 0;

	while (*s)
	{
		if (*s == '-')
		{
			signo *= -1;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			numero = 1;
			resultado = (resultado * 10) + (*s - '0');
		}
		else if (numero)
		{
			break;
		}
		s++;
	}
		if (signo == - 1 && resultado > 2147483647)
		{
			return (-2147483648);
		}
		else if (signo == - 1 && resultado > 2147483647)
		{
			return (2147483647);
		}
	return (resultado * signo);
}
