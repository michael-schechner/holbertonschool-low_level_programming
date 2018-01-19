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
		putchar(n);
		if (n == 'd' || n == 'p')
		{
			n = n+2;
		}
		else
		{
			n++;
		}
	}
	putchar('\n');
	return (0);
}
