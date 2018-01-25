#include "holberton.h"

/**
 * _isdigit - checks for char if equal to numerical ascii numbers
 * @c: int for char to check
 * Return: returns p
 */

int _isdigit(int c)
{
	int p = 1;

	if ((c >= 48) && (c < 58))
	{
		p = 1;
	}
	else
	{
		p = 0;
	}
	return (p);
}
