#include "holberton.h"

/**
 * print_sign - checks for char if equal to lower case ascii numbers
 * @n: int for char to check
 * Return: returns s
 */

int print_sign(int n)
{
	int s;

	if (n > 0)
	{
		_putchar('+');
		s = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		s = -1;
	}
	else
	{
		s = 0;
		_putchar('0');
	}
	return (s);
}
