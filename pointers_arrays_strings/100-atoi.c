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
			if (resultado > (2147483647 - (*s - '0')) / 10)
			{
				if (signo == 1)
					return (2147483647);
				else
					return (-2147483648);
			}
			numero = 1;
			resultado = (resultado * 10) + (*s - '0');
		}
		else if (numero)
		{
			break;
		}
		s++;
	}
	return (resultado * signo);
}
