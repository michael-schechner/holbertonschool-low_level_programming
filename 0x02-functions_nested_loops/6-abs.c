#include "holberton.h"

int _abs(int r)
{
  if(r < 0)
    {
      r = r * (-1);
    }
  else
    {
    r = r * 1;
    }
  return (r);
}
