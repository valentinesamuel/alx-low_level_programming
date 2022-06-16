#include "main.h"
/**
 *_strncat- append src string to dest string using at most n bytes
 *@dest: destination string
 *@src: source string
 *@n: bumber of bytes
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthOfDestString;
	int iterator=0;

	while (dest[iterator] != '\0')
	{
		iterator++;
	}
	lengthOfDestString = iterator;
	for (iterator = 0; src[iterator] && iterator < n; iterator++)
	{
		dest[lengthOfDestString++] = src[iterator];
	}
	return (dest);
}
