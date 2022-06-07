#include "main.h"

/**
 * print_alphabet - Function prototype
 * Description: Prints the letters of the alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int idx;

	for (idx = 0; idx < 10; idx++)
	{
		alpha = 'a';
		while (alpha <= 'x')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
