#include "holberton.h"

/**
 * print_square - prints a square with value of furthest point
 * of int n spaces long
 * @size: value determines size of square
 * Return: Return is void.
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			for (j = 1; j < size; j++)
			{
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
