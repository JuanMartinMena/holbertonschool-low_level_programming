#include "main.h"
/**
 * jack_bauer - print
 *
 * Return: void
 */
void jack_bauer(void)
{
	int M;
	int H;

	for (H = 0; H <= 23; H++)
{
	for (M = 0; M <= 59 ; M++)
{
	_putchar('0' + H / 10);
	_putchar('0' + H % 10);
	_putchar(':');
	_putchar('0' + M / 10);
	_putchar('0' + M % 10);
	_putchar('\n');
}
}
}
