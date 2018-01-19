#include <stdio.h>

/**
 * main - iterates through a while loop printing 0 through 9
 * Return: returns 0 upon termination
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n <= 8)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
