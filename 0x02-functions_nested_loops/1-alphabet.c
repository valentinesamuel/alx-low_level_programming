#include "main.h"

/**
 * print_alphabet - Function prototype
 * Description: Prints the letters of the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
