#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: array of pieces
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
	}
	_putchar('\n');
	i++;
}
