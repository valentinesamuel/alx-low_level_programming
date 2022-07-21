#include "main.h"

/**
 * print_binary - print binary reresentation of a number
 * @n: the number
 * Return: converted number
**/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
