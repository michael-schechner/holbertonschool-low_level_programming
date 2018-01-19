#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number along with a string of text
 * depending of the range
 * Return: returns 0 upon terminating
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
