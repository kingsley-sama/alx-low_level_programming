#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 *listint_len - returns length of a linked list
 *@h: pointer to a singly linked list
 *Return: the length of the linked list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *copy = h;

	if (copy == NULL)
		return (0);
	while (copy != NULL)
	{
		copy = copy->next;
		i++;
	}
	return (i);
}
