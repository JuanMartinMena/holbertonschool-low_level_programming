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
	memoria = malloc(b);

	if (memoria == NULL)
	{
		exit(98);
	}
	return (memoria);
}
