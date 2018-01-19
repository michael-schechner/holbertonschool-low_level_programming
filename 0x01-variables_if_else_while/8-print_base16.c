#include <stdio.h>

/**
 * main - iterates through a while loop printing 0 through 9
 * Return: returns 0 upon termination
 */

int main(void)
{
	int n = 0;
	int m = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
