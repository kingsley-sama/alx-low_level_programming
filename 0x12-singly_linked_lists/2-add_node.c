#include "lists.h"
#include <stddef.h>
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
/**
 *list_len - this function adds a node to the head of  linked list
 *Return: pointer to the new node
 *@h: this is a pointer to first node of the linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(head));

	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	return (n);
}
