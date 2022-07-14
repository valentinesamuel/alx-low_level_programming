#include <stdio.h>

/**
 * startbeforefunc - function executed before main
 * Return: nohin.
 */
void startbeforefunc(void) __attribute__((constructor(101)));

void startbeforefunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
