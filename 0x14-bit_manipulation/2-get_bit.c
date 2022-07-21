#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: value of the bit at index
**/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
