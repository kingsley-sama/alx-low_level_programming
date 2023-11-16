#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the beginning of a linked list
 * @head: a pointer to the pointer to the head of the linked list
 * @str: the string to be duplicated and stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *h = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (head != NULL)
		h = h->next;
	new_node->len = strlen(str);
	new_node->next = NULL;
	h->next = new_node;
	return (new_node);
}
