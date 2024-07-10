#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - suma
 *
 * @a: numero1
 * @b: numero2
 *
 * Return: numeros sumados
 */
int op_add(int a, int b)
{
	int sumados = 0;

	sumados = a + b;
	return (sumados);
}
/**
 * op_sub - resta
 *
 * @a: numero1
 * @b: numero2
 *
 * Return: numeros restados
 */
int op_sub(int a, int b)
{
	int restados = 0;

	restados = a - b;
	return (restados);
}
/**
 * op_mul - multiplicacion
 *
 * @a: numero1
 * @b: numero2
 *
 * Return: numeros multiplicados
 */
int op_mul(int a, int b)
{
	int multiplicados = 0;

	multiplicados = a * b;
	return (multiplicados);
}
/**
 * op_div - division
 *
 * @a: numero1
 * @b: numero2
 *
 * Return: numero divididos
 */
int op_div(int a, int b)
{
	int divididos = 0;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	divididos = a / b;
	return (divididos);
}
/**
 * op_mod - modulo
 *
 * @a: numero1
 * @b: numero2
 *
 * Return: modulo de a % b
 */
int op_mod(int a, int b)
{
	int modulo = 0;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	modulo = a % b;

	return (modulo);
}
