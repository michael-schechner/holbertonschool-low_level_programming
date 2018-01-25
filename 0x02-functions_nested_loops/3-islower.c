#include "holberton.h"

/**
 * _islower - checks for char if equal to lower case ascii numbers
 * @c: int for char to check
 * Return: returns p
 */

int _islower(int c)
{
	int p = 1;

	if ((c >= 98) && (c < 122))
	{
		p = 1;
	}
	else
	{
		p = 0;
	}
	return (p);
}
