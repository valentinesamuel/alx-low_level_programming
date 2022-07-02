#include "main.h"
#include <stdlib.h>

/**
 * _realloc - expands an alloc'd memory block
 * @ptr: malloc'd space to expand
 * @old_size: size of the malloc'd memory block
 * @new_size: size of the realloc'd memory block
 * Return: realloc'd mem or old mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
