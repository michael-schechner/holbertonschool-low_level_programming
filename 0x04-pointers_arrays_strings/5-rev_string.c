#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: pointer to char
 * Return: void
 */

void rev_string(char *s)
{

	char *m = s;

	int i = 0;
	int a = 0;

	while(m[i] != '\0')
	{
		i++;
	}
	i = i-1;
	a = 0;
	for (; i != 0 ; i--)
	{
		s[a] = m[i];
		if( a >= i)
		{
			break;
		}
		a++;
	}
}
