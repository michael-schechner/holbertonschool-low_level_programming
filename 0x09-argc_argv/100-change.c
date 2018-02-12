#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints lowest possible number of coins
 * @argc: parameter for arg count
 * @argv: parameter of args
 * Return: returns 1 if error otherwise 0
 */

int main(int argc, char *argv[])
{
	int change = atoi(argv[1]);
	int coins;
	int q, d, n, t, p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (change < 0)
	{
		printf("0\n");
	}
	else
	{
		q = change / 25;
		change = change - (q * 25);
		d = change / 10;
		change = change - (d * 10);
		n = change / 5;
		change = change - (n * 5);
		t = change / 2;
		change = change - (t * 2);
		p = change / 1;
		coins = p + t + n + d + q;
		printf("%d\n", coins);
	}
	return (0);
}
