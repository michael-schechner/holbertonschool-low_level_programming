#include "holberton.h"

/**
 * _strlen - counts length of string
 * @s: pointer to int
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(i);
	}
	return (0);
}
