#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char inicio = 'a';

	for (inicio = 'a'; inicio <= 'z'; inicio++)
{
	if (inicio != 'e' && inicio != 'q')
{
		putchar(inicio);
}
}
		putchar('\n');

	return (0);
}
