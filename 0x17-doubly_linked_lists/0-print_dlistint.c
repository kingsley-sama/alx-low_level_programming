#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
*print_dlistint - prints a doubly linked list
*@h: address of the linked list
*Return: the size of the list
*/
size_t print_dlistint(const dlistint_t *h)
{

size_t i = 0;
const dlistint_t *new;

new = h;
while (new != NULL)
{
printf("%d\n", new->n);
i += 1;
new = new->next;
}
return (i);

}
