#include "holberton.h"

/**
 * print_numbers - prints numbers 0 through 9, then new line
 * Return: Returns is void.
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
