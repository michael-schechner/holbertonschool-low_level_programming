#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

int main(int argc, char *argv[])
{
  int i = 1;
  int j = 0;
  int a = atoi(argv[i]);
  int b;
  char *s1;
  
  for (; i < argc-1; i++)
    {
      s1 = argv[i];
      for (; j != '\0'; j++)
	{
	  if((s1[j] < '0') || (s1[j] > '9'))
	    {
	      printf("Error\n");
	      return (1);
	    }
	}
    }
  for (; i < argc-1; i++)
    {
      b = atoi(argv[i + 1]);
      a = a + b;
    }
  printf("%d\n", a);
  return (0);
}
