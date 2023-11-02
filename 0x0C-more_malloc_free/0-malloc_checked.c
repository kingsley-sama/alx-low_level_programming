#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocates memory
 *@b: Total bytes of memory
 *Return: void pointer to the address
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b))
		return (malloc(b));
	exit(98);
}
