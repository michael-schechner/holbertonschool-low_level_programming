#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0 through 9 except 2 and 4,
 * then new line
 * Return: Returns is void.
 */

void print_most_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2)
		{
			n++;
		}
		else if (n == 4)
		{
			n++;
		}
		_putchar(n + '0');
		}
	_putchar('\n');
}
