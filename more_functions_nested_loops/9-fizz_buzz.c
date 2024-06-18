#include "main.h"
#include <stdio.h>
/**
 * main - start
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int numero;

	for (numero = 1; numero <= 100; numero++)
	{
		if (numero % 3 == 0 && numero % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (numero % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (numero % 5 == 0)
		{
			if (numero != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", numero);
		}
	}
	return (0);
}


