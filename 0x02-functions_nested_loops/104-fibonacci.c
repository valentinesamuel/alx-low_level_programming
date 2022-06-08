#include <stdio.h>

/**
 * main - Program entry point
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;
	unsigned long int max = 1000000000;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k += j;
		j = k - j;
	}

	j1 = j / max;
	j2 = j % max;
	k1 = k / max;
	k2 = k % max;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + k2 / max);
		printf("%lu", k2 % max);
		k1 += j1;
		j1 = k1 - j1;
		k2 += j2;
		j2 = k2 - j2;
	}

	printf("\n");
	return (0);
}
