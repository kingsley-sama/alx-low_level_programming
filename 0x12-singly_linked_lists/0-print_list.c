#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - this function prints all the elements of a linked list
 *Return: the length of the list
 *@h: this is a pointer to first node of the linked list
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *new = h;

	while (new != NULL)
	{
		printf("[%d]%s\n", new->len, new->str);
		new = new->next;
		i++;
	}
	return (i);
}
