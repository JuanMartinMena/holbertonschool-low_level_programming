#include "main.h"
/**
 * factorial - factorial
 *
 * @n: numero
 *
 * Return: void
 */
int factorial(int n)
{
	if (n > 0)
	{
		n = n * (n-1);
		factorial(n + 1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	return (n);
}
