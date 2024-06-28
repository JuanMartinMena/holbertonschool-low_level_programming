#include <stdio.h>
#include <stdlib.h>
/**
 * main - start
 *
 * @argc - numero_de_datos
 * @argv - string de datos
 *
 * Return: 0 (Succss)
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = (num1 * num2);

	(void)argc;
	if ( argc != 2)
	{
	}
	printf("%d\n", result);
	return (0);
}
