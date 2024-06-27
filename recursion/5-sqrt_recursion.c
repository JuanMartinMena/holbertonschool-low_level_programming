#include "main.h"
/**
 * funcion2 - raiz
 *
 * @n: numero
 * @root: raiz
 *
 * Return: void
 */
int funcion2(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	return (funcion2(n, root + 1));
}
/**
 * _sqrt_recursion - funcion main
 *
 * @n: numero
 *
 * Return: void
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (funcion2(n, 0));
}
