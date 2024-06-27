#include "main.h"
/**
 * is_prime_number - primo
 *
 * @n: numero
 *
 * Return: void
 */
int operacion(int n, int divisor)
{
	if (divisor > n / 2)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return operacion(n, divisor + 1);
}
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return operacion(n, 2);
}
