#include "mainn.h"
#include <stdio.h>

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */
void reverse_array(int *a, int n)
{
	char rev = a[0];
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
