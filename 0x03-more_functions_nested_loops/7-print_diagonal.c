#include "holberton.h"

/**
 * print_diagonal - prints diagonal with value of furthest point
 * of int n spaces long
 * @n: passes value to for loop; results in max length of line
 * Return: Return is void.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else if (i > j)
				{
					_putchar(' ');
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
