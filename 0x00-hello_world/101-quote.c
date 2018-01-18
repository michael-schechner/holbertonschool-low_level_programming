#include <stdio.h>
#include <unistd.h>
/**
 * main - uses system call to print a string to stderr
 * Return: returns 1 on termination
 */

int main(void)
{
	write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n"
, 57);
	return (1);
}
