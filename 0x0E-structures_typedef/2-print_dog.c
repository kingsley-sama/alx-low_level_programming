#include <stdio.h>
#include "dog.h"
/**
 * print_dog - this function prints the items in a dog struc
 * @d: an instance of struc dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
