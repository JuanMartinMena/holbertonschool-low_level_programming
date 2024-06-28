#include <stdio.h>
#include <stdlib.h>
/**
 * main - start
 *
 * @argc: numero de datos
 * @argv: datos
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, number, suma;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		number = atoi(argv[i]);

		if (number <= 0)
		{
			printf("Error\n");
			return (1);
		}
		suma += number;
	}
	printf("%d\n", suma);
	return (0);
}

