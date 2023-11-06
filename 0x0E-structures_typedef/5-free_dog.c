#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - frees memory alocated to a struct
 */
void free_dog(dog_t *d)
{
	free(d);
}
