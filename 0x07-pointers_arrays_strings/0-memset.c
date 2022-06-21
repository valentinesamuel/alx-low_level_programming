#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: where to put the bytes
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
