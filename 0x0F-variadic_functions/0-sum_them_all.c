#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/** sum_them_all - variadic func returns sum
 *  @n: number of args
 *  Return: returns 0 when n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	unsigned int sum = 0;

	va_start(valist, n);
	if (n == 0)
		return (0);
	for(i =  0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
