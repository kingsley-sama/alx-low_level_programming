#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_realloc - this function reinitializes a memory space
 *@ptr: this is the pointer to the previous address
 *@old_size: this is the size of the former pointer
 *@new_size: this is the size of the new pointer
 *Return: void pointer to the address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;

	if (new_size > old_size)
	{
		arr = realloc(ptr, new_size);
		return (arr);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	arr = realloc(ptr, new_size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
