#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates memory
 *@size: size of datatype
 *@nmemb: the number of block of memory
 *Return: void pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
