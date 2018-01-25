#include "holberton.h"

/**
 * _isupper - checks for char if equal to upper case ascii numbers
 * @c: int for char to check
 * Return: returns p
 */

int _isupper(int c)
{
	int p = 1;

	if ((c >= 65) && (c < 91))
	{
		p = 1;
	}
	else
	{
		p = 0;
	}
	return (p);
}
