#include <stdio.h>
#include "holberton.h"

void print_array(int *a, int n)
{
	int max = n;

	for (n = 0; n < max; n++)
	{
		printf("%d ", a[n]);
		if (n < (max - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
