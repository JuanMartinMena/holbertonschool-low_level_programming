#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char inicio = 'a';
	char final = 'A';

	for (inicio = 'a'; inicio <= 'z'; inicio++)
{
		putchar(inicio);
}
	for (final = 'A'; final <= 'Z'; final++)
{
		putchar(final);
}
		putchar('\n');
	return (0);
}
