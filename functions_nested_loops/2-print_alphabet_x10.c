#include "main.h"
/**
 * print_alphabet_x10 - print
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int repetir;
	char alphabet;

	for (repetir = 0; repetir < 10; repetir++)
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	_putchar(alphabet);
}
	_putchar('\n');
}
}
