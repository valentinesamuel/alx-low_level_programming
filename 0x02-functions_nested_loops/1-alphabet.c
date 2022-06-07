#include "main.h"

/**
 * print_alphabet - Function prototype
 * Description: Prints the letters of the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char start = 'a';
	while(start <= 'z')
	{
		_putchar(start);
		start++;
	}
	return (0);
}
