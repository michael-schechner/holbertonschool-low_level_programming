#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints product of first two arguments after 0
 * @argc: parameter for arg count
 * @argv: parameter of args
 * Return: returns 1 if error otherwise 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
