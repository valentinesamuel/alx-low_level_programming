#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory with malloc
 * @b: number of bytes to allocate
 * Return: malloc'd memory or exit
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
