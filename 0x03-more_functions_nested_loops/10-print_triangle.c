#include "holberton.h"

/**
 * printblock - takes parameters for size and character and prints
 * of int size spaces long
 * @a: int for setting size of block of chars
 * @b: sets the character to print
 */

void printblock(int a, char b)
{
	int i;

	for (i = 0; i < a; i++)
	{
		_putchar(b);
	}
}
/**
 * print_triangle - prints a triangle with largest line at value
 * of size
 * @size: parameter for the height of triangle
 * Return: Return is void.
 */

void print_triangle(int size)
{
	int p = 1;
	int height = size;

	while (height > 0)
	{
		printblock(height - 1, ' ');
		printblock(p, '#');
		_putchar('\n');
		height--;
		p++;
	}
}
