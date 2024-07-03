#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - 
 *
 *
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *memoria;

	memoria = malloc(b * sizeof(unsigned int));

	if (memoria == NULL)
	{
		exit(1);
	}
	return (memoria);
}
