#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 *dlistint_len - returns the length of a doubly linked list
 *@h: address of the linked list
 *Return: the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{

size_t i = 0;
const dlistint_t *new;

new = h;
while (new != NULL)
{
i += 1;
new = new->next;
}
return (i);

}
