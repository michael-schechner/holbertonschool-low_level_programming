#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints random number and related string
 * Return: returns 0 on terminating
 */

int main(void)
{
	int n = 0;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, n%10);
	if (n > 5)
	{
		printf("greater than 5");
	}
	else if (n < 5)
	{
		printf("less than 6 and not 0");
	}
	else
	{
		printf("0");
	}
	printf("\n");
	return (0);
}
