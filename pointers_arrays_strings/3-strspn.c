#include "main.h"
/**
 * _strspn - print
 *
 * @s: string1
 * @accept: string2
 *
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
			}
		}
		if (match == 0)
		{
			return (i);
		}
	}
	return (i);
}
