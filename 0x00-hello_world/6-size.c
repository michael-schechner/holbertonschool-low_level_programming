#include <stdio.h>

/**
 * main - uses printf with sizeof with various datatypes to display a string,
 * the size of the said variable, and a newline
 * Return: returns 0 upon termination
 */

int main(void)
{
	printf("Size of a char: %zu\ byte(s)\n", sizeof(char));
	printf("Size of an int: %zu\ byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
