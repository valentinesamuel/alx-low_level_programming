#include "main.h"
/**
 *_strncpy- copies n characters from string pointed to by src to dest,
 *@dest: destination string
 *@src: source string
 *@n: number of characters
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int iterator = 0;

	while (iterator < n && src[iterator])
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	while (iterator < n)
	{
		dest[iterator] = '\0';
		iterator++;
	}
	return (dest);
}
