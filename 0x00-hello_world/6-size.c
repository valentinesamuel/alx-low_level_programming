#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
