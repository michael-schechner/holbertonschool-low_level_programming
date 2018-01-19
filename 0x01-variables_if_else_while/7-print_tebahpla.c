#include <stdio.h>

/**
 * main - iterates through a while loop printing a through z
 * Return: returns 0 upon termination
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
