#include <stdio.h>

/**
 * main - iterates through a while loop printing 0 through 9
 * Return: returns 0 upon termination
 */

int main(void)
{
	int n = 0;
	int m = 0;

	for (; n <= 9 ; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n <= 7 ||  m <= 7)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
		putchar('\n');
		return (0);
}
