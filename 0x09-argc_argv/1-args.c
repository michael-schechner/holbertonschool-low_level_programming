#include <stdio.h>
#include "holberton.h"

/**
 * main - prints number of args
 * @argc: parameter for arg count
 * @argv: parameter of args
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
