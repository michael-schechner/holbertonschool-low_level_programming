#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - swaps values of a and b
 * @a: pointer to int
 * @b: pointer to int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
