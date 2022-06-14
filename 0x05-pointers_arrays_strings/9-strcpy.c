#include "main.h"

/**
 * *_strcpy - copy src array into dest array
 * @dest: character pointer
 * @src: character source
 *
 * Description: copies string pointed to by src
 * Return: return pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = src[index];
	return (dest);
}
