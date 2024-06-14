#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letra;

	for (letra = 'z'; letra >= 'a'; letra--)
{
	putchar(letra);
}
	putchar('\n');

	return (0);
}
