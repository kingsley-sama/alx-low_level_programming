#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the attributes of a dog structure
 * @d: a pointer to a struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (d->age >= 0.0)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
