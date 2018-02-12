#include <stdio.h>
#include "holberton.h"

/**
 * main - iterates through arguments while printing plus new line
 * @argc: parameter for arg count
 * @argv: parameter of args
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
