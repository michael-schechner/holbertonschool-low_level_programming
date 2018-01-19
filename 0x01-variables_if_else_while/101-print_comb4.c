#include <stdio.h>

/**
 * main - iterates through a while loop printing 0 through 9
 * Return: returns 0 upon termination
 */

int main(void)
{
	int m = 0;
	int n = 0;
	int o = 0;

	for (; m <= 9 ; m++)
	{
		for (n = m + 1; n <= 9; n++)
		{
			for (o = n + 1; o <= 9; o++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(o + '0');
				if (m != 7 || n != 8 || o != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
