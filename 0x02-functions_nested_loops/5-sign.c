#include "holberton.h"

int print_sign(int n)
{
  int s;
  if(n > 0)
    {
      _putchar('+');
      s = 1;
    }
  else if(n < 0)
    {
      _putchar('-');
      s = -1;
    }
  else
    {
      s = 0;
      _putchar('0');
    }
  return(s);
}
