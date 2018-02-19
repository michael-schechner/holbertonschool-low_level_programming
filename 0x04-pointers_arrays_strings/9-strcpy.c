#include <stdio.h>
#include <stdlib.h>

char *_strcpy(char *dest, char *src)
{
  int i;
  int c = 0;
  
  while(dest[c] != '\0')
    c++;
  for (i = 0; src[i] != '\0'; i++)
    {
      dest[i] = src[i];
    }
  for ( ; i <  c; i++)
    {
      dest[i] = '\0';
    }
  return (dest);
}
