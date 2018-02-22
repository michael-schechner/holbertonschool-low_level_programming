#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: char pointer storing a name
 * @f: function pointer returning char pointer
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
