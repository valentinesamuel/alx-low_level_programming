#include "main.h"

/**
 * flip_bits - flip bits
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped from n to m
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}
