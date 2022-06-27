#include "main.h"
#include <stdlib.h>

/**
 * create_array - create and array of a specific size
 * @size: size of the memory block;
 * @c: value to fill the block with
 *
 * Return: the malloc'd array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
