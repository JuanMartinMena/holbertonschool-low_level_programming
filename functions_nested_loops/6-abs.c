#include "main.h"
/**
 * _abs - function
 * 
 * Return: void
 */
int _abs(int)
{
	if (_abs < 0)
{
	_putchar(-_abs);
}
	else if (_abs == 0)
{
	_putchar('0');
}
	else
{
	_putchar(_abs);
}
	_putchar('\n');
}
