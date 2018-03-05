#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlenc - gets str length of const
 * @s: const pointer to string
 * Return: returns length of s
 */

int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 *add_node - adds node to begining
 * @head: pointer to pointer containing nodes
 * @str: pointer to string
 * Return: returns node otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL || str == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = _strlenc(str);
	node->next = *head;
	*head = node;
	return (node);
}
