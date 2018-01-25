#include "holberton.h"

/**
 * _isalpha - checks for char if equal to alphabetical ascii numbers
 * @c: int for char to check
 * Return: returns p
 */

int _isalpha(int c)
{
	int p = 1;

	if (((c >= 98) && (c < 122)) || ((c >= 65) && (c < 90)))
	{
		p = 1;
	}
	else
	{
		p = 0;
	}
	return (p);
}
