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
	size_t i;
	const listint_t *copy = h;

	while (copy != NULL)
	{
		printf("%d\n", copy->n);
		copy = copy->next;
		i++;
	}
	return (i);
}
