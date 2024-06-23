#include "main.h"
/**
 * *_strcat - print
 *
 * @dest: variable1
 * @src: variable2
 *
 *  Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	char *final = dest;
	int i;
	
	while (*final != '\0')
        {
		final++;
        }

        for (i = 0; i < n && *src != '\0'; i++)
        {
                *final = *src;
                final++;
                src++;
        }
        *final = '\0';
        return (dest);
}
