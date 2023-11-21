#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint - this function prints all the elements of a list
 *@h: pointer to a singly linked list
 *Return: the length of the linked list
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		printf("%d\n", c->n);

	return (count);
}
