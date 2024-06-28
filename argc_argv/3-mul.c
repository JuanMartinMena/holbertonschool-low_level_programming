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
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error");
		return (0);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = (num1 * num2);

	printf("%d\n", result);
	return (0);
}
