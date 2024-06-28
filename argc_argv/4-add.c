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
	int i, j, number, suma = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
		number = atoi(argv[i]);
		suma += number;
	}
	}
	printf("%d\n", suma);
	return (0);
}
