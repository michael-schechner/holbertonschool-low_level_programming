#include "holberton.h"

void puts_half(char *str)
{
	int i;
	int x;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (x = 0; x < i; x++)
	{
		if (i % 2 == 0)
		{
			if (x >= i / 2)
			{
				_putchar(str[x]);
			}
		}
		else if (i % 2 == 1)
		{
			if (x >= (i - 1) / 2)
			{
				_putchar(str[x]);
			}
		}
	}
	_putchar('\n');
}
