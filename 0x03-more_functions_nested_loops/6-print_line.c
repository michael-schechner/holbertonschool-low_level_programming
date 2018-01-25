#include "holberton.h"

/**
 * print_line - prints line with length equal to value
 * of int n spaces long
 * @n: passes value to for loop; results in length of line
 * Return: Return is void.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
