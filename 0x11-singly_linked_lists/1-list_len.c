#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: head of linkedlist
 * Return: returns number of elements;
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL ; count++)
	{
		h = h->next;
	}
	return (count);
}
