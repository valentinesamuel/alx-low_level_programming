#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the malloc'd memory of a 2-dim array
 * @width: width of the 2-dim array
 * @height: height of the 2-dim array
 * Return: malloc'd memory
 */
int free_grid(int width, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
