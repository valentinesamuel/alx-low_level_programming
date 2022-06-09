#include "main.h"

/**
 * print_diagonal - prints diagonally
 * @n: integer
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
	int y;
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			for (z = 0; z < y; z++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}

}
