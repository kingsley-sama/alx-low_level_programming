#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - frees memory alocated to a struct
 * @d: the address of the struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
			free(d->name);
	free(d->owner);
	free(d);
	}
}
