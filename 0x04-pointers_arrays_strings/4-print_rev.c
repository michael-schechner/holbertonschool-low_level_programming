#include "holberton.h"

void print_rev(char *str)
{
	int i = 0;
	int a = 0;

	while(str[a] != '\0')
	{
		a++;
	}

	for (i = a; i != 0 ; i--)
	{
		_putchar(str[i]);
	}
}
