#include "holberton.h"

/**
 * print_rev - prints string in reverse
 * @str: pointer to char
 * Return: void
 */

void print_rev(char *str)
{
	int i = 0;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (i = a; i != 0 ; i--)
	{
		_putchar(str[i]);
	}
}
