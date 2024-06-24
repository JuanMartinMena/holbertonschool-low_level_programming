#include "main.h"
/**
 * *leet - print
 *
 * @str: string
 *
 * Return: void
 */
char *leet(char *str)
{
	char letras[] = "aAeEoOtTlL";
	char numeros[] = "4433007711";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letras[j] != '\0'; j++)
		{
			if (str[i] == letras[j])
			{
				str[i] = numeros[j];
			}
		}
	}
	return (str);
}

