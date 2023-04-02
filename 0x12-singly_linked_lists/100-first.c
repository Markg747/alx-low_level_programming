#include <stdio.h>

/* Using constructors in C */
void print_before(void) __attribute__((constructor));
/**
 * print_before - A constructor function that prints a message before main runs
 *
 * Return: void
 */
void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
