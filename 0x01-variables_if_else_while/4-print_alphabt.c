#include <stdio.h>

/**
 * main - iterates through a while loop printing a through z
 * Return: returns 0 upon termination
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n == 'd' || n == 'p')
		{
			putchar(n);
			n = n+2;
		}
		else
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
