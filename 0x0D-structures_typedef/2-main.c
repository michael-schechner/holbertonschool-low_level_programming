#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  struct dog my_dog;

  my_dog.name = NULL;
  my_dog.age = NULL;
  my_dog.owner = "Jay";
  print_dog(&my_dog);
  return (0);
}
