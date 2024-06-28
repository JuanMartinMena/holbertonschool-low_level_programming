#include <stdio.h>
/**
 * main - start
 *
 * @argc: numero de dato
 *
 * @argv: string de argc
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 1;

	while (i <= argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
