#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letras;
	int numero;

	for (numero = 0; numero <= 9; numero++)
{
	putchar(numero + '0');
}
	for (letras = 'a'; letras <= 'f'; letras++)
{
	putchar(letras);
}
	putchar('\n');

	return (0);
}
