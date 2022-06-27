#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates malloc'd memory to a 2-dim array
 * @width: width of the 2-dim array
 * @height: height of the 2-dim array
 * Return: malloc'd memory
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **twoDimArr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	twoDimArr = malloc(height * sizeof(*twoDimArr));
	if (twoDimArr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		twoDimArr[i] = malloc(width * sizeof(int));
		if (twoDimArr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(twoDimArr[j]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			twoDimArr[i][j] = 0;
		}
	}
	return (twoDimArr);
}
