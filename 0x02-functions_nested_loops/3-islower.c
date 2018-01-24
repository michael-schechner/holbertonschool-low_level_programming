#include "holberton.h"

int _islower(int c)
{ 
  int p = 1;
  if((c >= 98) && (c < 122))
    {
      p = 1;
    }
  else
    {
      p = 0;
    }
  return (p);
}
