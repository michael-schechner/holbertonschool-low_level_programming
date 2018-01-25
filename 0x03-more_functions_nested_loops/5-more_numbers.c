#include "holberton.h"

/**
 * more_numbers - prints numbers 0 through 14 ten times,
 * then a new line
 * Return: Return is void.
 */

void more_numbers(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
