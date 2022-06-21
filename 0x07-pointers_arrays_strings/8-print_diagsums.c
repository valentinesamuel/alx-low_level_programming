#include <stdio.h>

/**
 * print_diagsums - Print the sums of the two diagnols of a matrix
 * @a: The matrix
 * @size: The length of the arrays
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum1 = sum1 + *(a + (i * size + i));
		sum2 = sum2 + *(a + (i * size * size + i - 1));
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
