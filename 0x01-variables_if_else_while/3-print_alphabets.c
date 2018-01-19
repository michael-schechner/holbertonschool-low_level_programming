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
		n++;
	}
	n = 'A';
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
