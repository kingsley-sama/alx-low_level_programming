#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - this function prints the items in a dog struc
 * @d: an instance of struc dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)\n");
		if (d->age >= 0.0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}

}
