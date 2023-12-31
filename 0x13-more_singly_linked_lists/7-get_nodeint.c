#include "lists.h"

/**
 * get_nodeint_at_index - This returns the nth node of a listint_t linked list
 * @head: Head  node in the linked list
 * @index: index of the node to return
 * Return: Node if it exist or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
