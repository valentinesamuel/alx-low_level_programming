#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to base 10
 * @b: sting of 0s and 1s
 * Return: converted number
**/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}
	return (decimal);
}
