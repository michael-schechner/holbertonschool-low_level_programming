#include "holberton.h"

/**
 * main - prints alphabet
 *
 * Return: Returnss 0.
 */
void print_alphabet_x10(void)
{
  char i;
  int j;
  for(j = 10; j != 0; j--)
    {
      for(i = 'a'; i <= 'z'; i++)
	{
	  _putchar(i);
	}
      _putchar('\n');
    }
}
