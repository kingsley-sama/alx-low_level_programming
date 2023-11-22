#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint - adds a new node to a linked list
 *@head: address of the node
 *@n: integer value in the node
 *Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *copy = malloc(sizeof(listint_t));

	if (copy == NULL)
		return (*head);
	copy->n = n;
	copy->next = *head;
	*head = copy;
	return (copy);
}
