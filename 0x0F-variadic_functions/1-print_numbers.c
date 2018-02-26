#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/** print_numbers -
 *  @n:
 *  Return: returns 0 when n is 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);
     	for ( i = 0; i < n; i++)
	{
		if(i == n-1)
			printf("%d %s\n", va_arg(valist, int));
		else if
		{
			printf("%d %s", va_arg(valist, int), separator);
		}
	}
	va_end(valist);
}
