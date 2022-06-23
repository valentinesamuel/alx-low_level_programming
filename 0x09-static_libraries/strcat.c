#include "main.h"

/**
 * _strcat - appends src string to dest string
 * @dest: string to output
 * @src: string to be appended
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int lengthOfDestString;
	int iterator = 0;

	while (dest[iterator] != '\0')
	{
		iterator++;
	}
	lengthOfDestString = iterator;
	for (iterator = 0; src[iterator]; iterator++)
	{
		dest[lengthOfDestString++] = src[iterator];
	}
	return (dest);
}
