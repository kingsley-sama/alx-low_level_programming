#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len - this function returns the length of a linked list
 *Return: length list
 *@h: this is a pointer to first node of the linked list
 */

size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *new = h;

	while (new != NULL)
	{
		new = new->next;
		i++;
	}
	return (i);
}
