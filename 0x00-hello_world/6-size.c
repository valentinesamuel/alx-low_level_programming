#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char my_char;
	int my_int;
	long int my_long_int;
	long long int my_long_long_int;
	float my_float;

	printf("Size of a char: %c byte(s)", my_char);
	printf("Size of an int: %i bytes(s)", my_int);
	printf("Size of a long int: %li bytes(s)", my_long_int);
	printf("Size of a long long int: %lli bytes(s)", my_long_long_int);
	printf("Size of a float: %f bytes(s)", my_float);
	return (0);
}
